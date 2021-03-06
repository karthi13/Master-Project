#!/usr/bin/env python
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# Copyright (C) 2016 Bastian Bloessl <bloessl@ccs-labs.org>
# Copyright (C) 2016 Michele Segata <segata@ccs-labs.org>

import sys
import ConfigParser


class multidict(dict):
    _unique = 0

    def __setitem__(self, key, val):
        if isinstance(val, dict):
            self._unique += 1
            key += str(self._unique)
        dict.__setitem__(self, key, val)

# instantiate a config parser
cfg = ConfigParser.ConfigParser(None, multidict)

# parse the config file
if len(sys.argv) != 2:
    print("Usage: genmakefile.py <config file>")
    sys.exit(1)

try:
    cfgFile = file(sys.argv[1])
    cfg.readfp(cfgFile)
except Exception as e:
    print("Unable to parse " + sys.argv[1])
    print(e.message)
    sys.exit(1)

# where the results are stored
resultDir = "../results"

# list of configs: config name, parsing script, prefix for output Rdata file
configs = []

for s in cfg.sections():
    if s.startswith("params"):
        if cfg.has_option(s, "resdir"):
            resultDir = cfg.get(s, "resdir")

    if s.startswith("config"):
        if not cfg.has_option(s, "out"):
            print("section " + s + " misses out option")
            sys.exit(1)
        if not cfg.has_option(s, "config"):
            print("section " + s + " misses config option")
            sys.exit(1)
        if not cfg.has_option(s, "map"):
            print("section " + s + " misses map option")
            sys.exit(1)
        if not cfg.has_option(s, "mapFile"):
            print("section " + s + " misses mapFile option")
            sys.exit(1)
        if not cfg.has_option(s, "prefix"):
            print("section " + s + " misses prefix name")
            sys.exit(1)
        configs.append([cfg.get(s, "config"), cfg.get(s, "map"), cfg.get(s, "mapFile"), cfg.get(s, "prefix"), cfg.get(s, "out"), cfg.get(s, "merge")])


def getSpaces(string, length):
    return ' ' * (length - len(string))


def getLonger(configs):
    longer = 0
    for c in configs:
        if len(c[4]) > longer:
            longer = len(c[4])
    # longer + 5 (_DATA)
    return longer + 5


# output some variables
print("# tool for indexing vec files")
print("SCAVETOOL = scavetool")
print("# scripts location")
print("SCRIPTDIR = .")
print("# results location")
print("RESDIR = " + resultDir)
print("# script for merging")
print("MERGESCRIPT = $(SCRIPTDIR)/merge.R")
print("")

longer = getLonger(configs)

for c in configs:
    print("# match all .vec files for the " + c[0] + " config")
    print(c[4].upper() + getSpaces(c[4], longer) + " = $(wildcard $(RESDIR)/" + c[0] + "*.vec)")
    print("# change suffix from .vec to .Rdata and add the " + c[3] + " prefix")
    print(c[4].upper() + "_DATA" + getSpaces(c[4] + "_DATA", longer) + " = $(" + c[4].upper() + ":$(RESDIR)/%.vec=$(RESDIR)/" + c[3] + ".%.Rdata)")

print("")
print("# vector index files and Rdata files")
print("VCI = $(VECTOR:%.vec=%.vci)")
print("RDATA = $(VECTOR:%.vec=%.Rdata)")

print("")
print("# all make targets")
sys.stdout.write("all: ")
for c in configs:
    sys.stdout.write(c[4] + ".Rdata ")
print("")
print("")

for c in configs:
    print("# to make " + c[4] + ".Rdata we need to merge all files starting with " + c[3] + "." + c[0])
    print("# before this, check that all " + c[4].upper() + "_DATA files have been processed")
    print("$(RESDIR)/" + c[4] + ".Rdata: $(" + c[4].upper() + "_DATA)")
    if c[5] == '1':
        print("\tRscript $(MERGESCRIPT) $(RESDIR)/ " + c[3] + "." + c[0] + " $(notdir $@) " + c[2] + " " + c[1])
    else:
        print("\tRscript $(MERGESCRIPT)")
    print(c[4] + ".Rdata: $(RESDIR)/" + c[4] + ".Rdata")
    print("")

for c in configs:
    print("# to make all " + c[3] + ".*.Rdata files we need to run the generic parser")
    print(c[3] + ".%.Rdata: %.vec %.vci")
    print("\tRscript generic-parser.R $< " + c[2] + " " + c[1] + " " + c[3])
    print("")

print("# if vec files are not indexed, index them")
print("%.vci : %.vec")
print("\t$(SCAVETOOL) index $<")
print("")

print("# helper to print variable values. e.g.: make print-DELAY_DATA")
print("print-%:")
print("\t@echo '$*=$($*)'")

print("")
print("# every intermediate file is kept instead of being automatically deleted.")
print("# .vci files are detected as intermediate and thus cancelled when the make")
print("# command terminates. however, such files can still be needed by other")
print("# targets, so keep them instead of re-doing indexing")
print(".SECONDARY :")
