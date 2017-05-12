#
# OMNeT++/OMNEST Makefile for libplexe-veins
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -O out -Iplexe-veins/src/ -I/home/hh-ide/src/plexe-veins/src/veins -I/home/hh-ide/src/plexe-veins/src
#

# Name of target to be created (-o option)
TARGET = libplexe-veins$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -Iplexe-veins/src/ \
    -Iveins \
    -I. \
    -I. \
    -Iscripts \
    -Iveins \
    -Iveins/base \
    -Iveins/base/connectionManager \
    -Iveins/base/messages \
    -Iveins/base/modules \
    -Iveins/base/phyLayer \
    -Iveins/base/utils \
    -Iveins/modules \
    -Iveins/modules/analogueModel \
    -Iveins/modules/application \
    -Iveins/modules/application/ieee80211p \
    -Iveins/modules/application/platooning \
    -Iveins/modules/application/platooning/apps \
    -Iveins/modules/application/platooning/messages \
    -Iveins/modules/application/platooning/protocols \
    -Iveins/modules/application/platooning/scenarios \
    -Iveins/modules/application/platooning/traffic \
    -Iveins/modules/application/platooning/utilities \
    -Iveins/modules/application/traci \
    -Iveins/modules/mac \
    -Iveins/modules/mac/ieee80211p \
    -Iveins/modules/messages \
    -Iveins/modules/mobility \
    -Iveins/modules/mobility/traci \
    -Iveins/modules/nic \
    -Iveins/modules/obstacle \
    -Iveins/modules/phy \
    -Iveins/modules/utility \
    -Iveins/modules/world \
    -Iveins/modules/world/annotations \
    -Iveins/nodes

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc, .msg and .sm files
OBJS = \
    $O/veins/base/connectionManager/BaseConnectionManager.o \
    $O/veins/base/connectionManager/NicEntryDirect.o \
    $O/veins/base/connectionManager/ConnectionManager.o \
    $O/veins/base/connectionManager/NicEntryDebug.o \
    $O/veins/base/connectionManager/ChannelAccess.o \
    $O/veins/base/modules/BatteryAccess.o \
    $O/veins/base/modules/BaseMacLayer.o \
    $O/veins/base/modules/BaseLayer.o \
    $O/veins/base/modules/BaseWorldUtility.o \
    $O/veins/base/modules/BaseMobility.o \
    $O/veins/base/modules/BaseApplLayer.o \
    $O/veins/base/modules/BaseBattery.o \
    $O/veins/base/modules/BaseModule.o \
    $O/veins/base/phyLayer/MappingBase.o \
    $O/veins/base/phyLayer/Decider.o \
    $O/veins/base/phyLayer/BaseDecider.o \
    $O/veins/base/phyLayer/BasePhyLayer.o \
    $O/veins/base/phyLayer/ChannelState.o \
    $O/veins/base/phyLayer/PhyUtils.o \
    $O/veins/base/phyLayer/ChannelInfo.o \
    $O/veins/base/phyLayer/Signal.o \
    $O/veins/base/phyLayer/MappingUtils.o \
    $O/veins/base/utils/asserts.o \
    $O/veins/base/utils/SimpleAddress.o \
    $O/veins/base/utils/winsupport.o \
    $O/veins/base/utils/NetwToMacControlInfo.o \
    $O/veins/base/utils/Coord.o \
    $O/veins/modules/analogueModel/SimplePathlossModel.o \
    $O/veins/modules/analogueModel/PERModel.o \
    $O/veins/modules/analogueModel/GenericFading.o \
    $O/veins/modules/analogueModel/BreakpointPathlossModel.o \
    $O/veins/modules/analogueModel/NakagamiFading.o \
    $O/veins/modules/analogueModel/SimpleObstacleShadowing.o \
    $O/veins/modules/analogueModel/LogNormalShadowing.o \
    $O/veins/modules/analogueModel/TwoRayInterferenceModel.o \
    $O/veins/modules/analogueModel/JakesFading.o \
    $O/veins/modules/application/ieee80211p/BaseWaveApplLayer.o \
    $O/veins/modules/application/platooning/UnicastProtocol.o \
    $O/veins/modules/application/platooning/apps/BaseApp.o \
    $O/veins/modules/application/platooning/apps/SimplePlatooningApp.o \
    $O/veins/modules/application/platooning/protocols/BaseProtocol.o \
    $O/veins/modules/application/platooning/protocols/SimplePlatooningBeaconing.o \
    $O/veins/modules/application/platooning/scenarios/SinusoidalScenario.o \
    $O/veins/modules/application/platooning/scenarios/BaseScenario.o \
    $O/veins/modules/application/platooning/scenarios/BrakingScenario.o \
    $O/veins/modules/application/platooning/scenarios/AccelerateAndBrakeScenario.o \
    $O/veins/modules/application/platooning/traffic/PlatoonsTrafficManager.o \
    $O/veins/modules/application/platooning/traffic/SimpleHeterogenous.o \
    $O/veins/modules/application/platooning/utilities/PositionHelper.o \
    $O/veins/modules/application/platooning/utilities/BasePositionHelper.o \
    $O/veins/modules/application/traci/TraCIDemoRSU11p.o \
    $O/veins/modules/application/traci/TraCITestApp.o \
    $O/veins/modules/application/traci/TraCIDemo11p.o \
    $O/veins/modules/mac/ieee80211p/Mac1609_4.o \
    $O/veins/modules/mobility/traci/TraCILauncher.o \
    $O/veins/modules/mobility/traci/TraCIBaseTrafficManager.o \
    $O/veins/modules/mobility/traci/TraCIMobility.o \
    $O/veins/modules/mobility/traci/TraCIColor.o \
    $O/veins/modules/mobility/traci/TraCIConnection.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManagerForker.o \
    $O/veins/modules/mobility/traci/TraCIScreenRecorder.o \
    $O/veins/modules/mobility/traci/TestTrafficManager.o \
    $O/veins/modules/mobility/traci/TraCIBuffer.o \
    $O/veins/modules/mobility/traci/TraCICommandInterface.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManager.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManagerInet.o \
    $O/veins/modules/mobility/traci/SumoTrafficManager.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o \
    $O/veins/modules/obstacle/ObstacleControl.o \
    $O/veins/modules/obstacle/Obstacle.o \
    $O/veins/modules/phy/Decider80211p.o \
    $O/veins/modules/phy/SNRThresholdDecider.o \
    $O/veins/modules/phy/PhyLayer80211p.o \
    $O/veins/modules/phy/NistErrorRate.o \
    $O/veins/modules/world/annotations/AnnotationDummy.o \
    $O/veins/modules/world/annotations/AnnotationManager.o \
    $O/veins/base/messages/MacPkt_m.o \
    $O/veins/base/messages/BorderMsg_m.o \
    $O/veins/base/messages/AirFrame_m.o \
    $O/veins/base/messages/ChannelSenseRequest_m.o \
    $O/veins/modules/application/platooning/messages/UnicastProtocolControlMessage_m.o \
    $O/veins/modules/application/platooning/messages/PlatooningBeacon_m.o \
    $O/veins/modules/application/platooning/messages/UnicastMessage_m.o \
    $O/veins/modules/messages/PhyControlMessage_m.o \
    $O/veins/modules/messages/WaveShortMessage_m.o \
    $O/veins/modules/messages/AirFrame11p_m.o \
    $O/veins/modules/messages/Mac80211Pkt_m.o

# Message files
MSGFILES = \
    veins/base/messages/MacPkt.msg \
    veins/base/messages/BorderMsg.msg \
    veins/base/messages/AirFrame.msg \
    veins/base/messages/ChannelSenseRequest.msg \
    veins/modules/application/platooning/messages/UnicastProtocolControlMessage.msg \
    veins/modules/application/platooning/messages/PlatooningBeacon.msg \
    veins/modules/application/platooning/messages/UnicastMessage.msg \
    veins/modules/messages/PhyControlMessage.msg \
    veins/modules/messages/WaveShortMessage.msg \
    veins/modules/messages/AirFrame11p.msg \
    veins/modules/messages/Mac80211Pkt.msg

# SM files
SMFILES =

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)
SMCOPTS =

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders smheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

%_sm.cc %_sm.h: %.sm
	$(qecho) SMC: $<
	$(Q)$(SMC) -c++ -suffix cc $(SMCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

smheaders: $(SMFILES:.sm=_sm.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f plexe-veins plexe-veins.exe libplexe-veins.so libplexe-veins.a libplexe-veins.dll libplexe-veins.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h ./*_sm.cc ./*_sm.h
	$(Q)-rm -f scripts/*_m.cc scripts/*_m.h scripts/*_sm.cc scripts/*_sm.h
	$(Q)-rm -f veins/*_m.cc veins/*_m.h veins/*_sm.cc veins/*_sm.h
	$(Q)-rm -f veins/base/*_m.cc veins/base/*_m.h veins/base/*_sm.cc veins/base/*_sm.h
	$(Q)-rm -f veins/base/connectionManager/*_m.cc veins/base/connectionManager/*_m.h veins/base/connectionManager/*_sm.cc veins/base/connectionManager/*_sm.h
	$(Q)-rm -f veins/base/messages/*_m.cc veins/base/messages/*_m.h veins/base/messages/*_sm.cc veins/base/messages/*_sm.h
	$(Q)-rm -f veins/base/modules/*_m.cc veins/base/modules/*_m.h veins/base/modules/*_sm.cc veins/base/modules/*_sm.h
	$(Q)-rm -f veins/base/phyLayer/*_m.cc veins/base/phyLayer/*_m.h veins/base/phyLayer/*_sm.cc veins/base/phyLayer/*_sm.h
	$(Q)-rm -f veins/base/utils/*_m.cc veins/base/utils/*_m.h veins/base/utils/*_sm.cc veins/base/utils/*_sm.h
	$(Q)-rm -f veins/modules/*_m.cc veins/modules/*_m.h veins/modules/*_sm.cc veins/modules/*_sm.h
	$(Q)-rm -f veins/modules/analogueModel/*_m.cc veins/modules/analogueModel/*_m.h veins/modules/analogueModel/*_sm.cc veins/modules/analogueModel/*_sm.h
	$(Q)-rm -f veins/modules/application/*_m.cc veins/modules/application/*_m.h veins/modules/application/*_sm.cc veins/modules/application/*_sm.h
	$(Q)-rm -f veins/modules/application/ieee80211p/*_m.cc veins/modules/application/ieee80211p/*_m.h veins/modules/application/ieee80211p/*_sm.cc veins/modules/application/ieee80211p/*_sm.h
	$(Q)-rm -f veins/modules/application/platooning/*_m.cc veins/modules/application/platooning/*_m.h veins/modules/application/platooning/*_sm.cc veins/modules/application/platooning/*_sm.h
	$(Q)-rm -f veins/modules/application/platooning/apps/*_m.cc veins/modules/application/platooning/apps/*_m.h veins/modules/application/platooning/apps/*_sm.cc veins/modules/application/platooning/apps/*_sm.h
	$(Q)-rm -f veins/modules/application/platooning/messages/*_m.cc veins/modules/application/platooning/messages/*_m.h veins/modules/application/platooning/messages/*_sm.cc veins/modules/application/platooning/messages/*_sm.h
	$(Q)-rm -f veins/modules/application/platooning/protocols/*_m.cc veins/modules/application/platooning/protocols/*_m.h veins/modules/application/platooning/protocols/*_sm.cc veins/modules/application/platooning/protocols/*_sm.h
	$(Q)-rm -f veins/modules/application/platooning/scenarios/*_m.cc veins/modules/application/platooning/scenarios/*_m.h veins/modules/application/platooning/scenarios/*_sm.cc veins/modules/application/platooning/scenarios/*_sm.h
	$(Q)-rm -f veins/modules/application/platooning/traffic/*_m.cc veins/modules/application/platooning/traffic/*_m.h veins/modules/application/platooning/traffic/*_sm.cc veins/modules/application/platooning/traffic/*_sm.h
	$(Q)-rm -f veins/modules/application/platooning/utilities/*_m.cc veins/modules/application/platooning/utilities/*_m.h veins/modules/application/platooning/utilities/*_sm.cc veins/modules/application/platooning/utilities/*_sm.h
	$(Q)-rm -f veins/modules/application/traci/*_m.cc veins/modules/application/traci/*_m.h veins/modules/application/traci/*_sm.cc veins/modules/application/traci/*_sm.h
	$(Q)-rm -f veins/modules/mac/*_m.cc veins/modules/mac/*_m.h veins/modules/mac/*_sm.cc veins/modules/mac/*_sm.h
	$(Q)-rm -f veins/modules/mac/ieee80211p/*_m.cc veins/modules/mac/ieee80211p/*_m.h veins/modules/mac/ieee80211p/*_sm.cc veins/modules/mac/ieee80211p/*_sm.h
	$(Q)-rm -f veins/modules/messages/*_m.cc veins/modules/messages/*_m.h veins/modules/messages/*_sm.cc veins/modules/messages/*_sm.h
	$(Q)-rm -f veins/modules/mobility/*_m.cc veins/modules/mobility/*_m.h veins/modules/mobility/*_sm.cc veins/modules/mobility/*_sm.h
	$(Q)-rm -f veins/modules/mobility/traci/*_m.cc veins/modules/mobility/traci/*_m.h veins/modules/mobility/traci/*_sm.cc veins/modules/mobility/traci/*_sm.h
	$(Q)-rm -f veins/modules/nic/*_m.cc veins/modules/nic/*_m.h veins/modules/nic/*_sm.cc veins/modules/nic/*_sm.h
	$(Q)-rm -f veins/modules/obstacle/*_m.cc veins/modules/obstacle/*_m.h veins/modules/obstacle/*_sm.cc veins/modules/obstacle/*_sm.h
	$(Q)-rm -f veins/modules/phy/*_m.cc veins/modules/phy/*_m.h veins/modules/phy/*_sm.cc veins/modules/phy/*_sm.h
	$(Q)-rm -f veins/modules/utility/*_m.cc veins/modules/utility/*_m.h veins/modules/utility/*_sm.cc veins/modules/utility/*_sm.h
	$(Q)-rm -f veins/modules/world/*_m.cc veins/modules/world/*_m.h veins/modules/world/*_sm.cc veins/modules/world/*_sm.h
	$(Q)-rm -f veins/modules/world/annotations/*_m.cc veins/modules/world/annotations/*_m.h veins/modules/world/annotations/*_sm.cc veins/modules/world/annotations/*_sm.h
	$(Q)-rm -f veins/nodes/*_m.cc veins/nodes/*_m.h veins/nodes/*_sm.cc veins/nodes/*_sm.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES) $(SM_CC_FILES)  ./*.cc scripts/*.cc veins/*.cc veins/base/*.cc veins/base/connectionManager/*.cc veins/base/messages/*.cc veins/base/modules/*.cc veins/base/phyLayer/*.cc veins/base/utils/*.cc veins/modules/*.cc veins/modules/analogueModel/*.cc veins/modules/application/*.cc veins/modules/application/ieee80211p/*.cc veins/modules/application/platooning/*.cc veins/modules/application/platooning/apps/*.cc veins/modules/application/platooning/messages/*.cc veins/modules/application/platooning/protocols/*.cc veins/modules/application/platooning/scenarios/*.cc veins/modules/application/platooning/traffic/*.cc veins/modules/application/platooning/utilities/*.cc veins/modules/application/traci/*.cc veins/modules/mac/*.cc veins/modules/mac/ieee80211p/*.cc veins/modules/messages/*.cc veins/modules/mobility/*.cc veins/modules/mobility/traci/*.cc veins/modules/nic/*.cc veins/modules/obstacle/*.cc veins/modules/phy/*.cc veins/modules/utility/*.cc veins/modules/world/*.cc veins/modules/world/annotations/*.cc veins/nodes/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/veins/base/connectionManager/BaseConnectionManager.o: veins/base/connectionManager/BaseConnectionManager.cc
$O/veins/base/connectionManager/ChannelAccess.o: veins/base/connectionManager/ChannelAccess.cc
$O/veins/base/connectionManager/ConnectionManager.o: veins/base/connectionManager/ConnectionManager.cc
$O/veins/base/connectionManager/NicEntryDebug.o: veins/base/connectionManager/NicEntryDebug.cc
$O/veins/base/connectionManager/NicEntryDirect.o: veins/base/connectionManager/NicEntryDirect.cc
$O/veins/base/messages/AirFrame_m.o: veins/base/messages/AirFrame_m.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/Signal_.h
$O/veins/base/messages/BorderMsg_m.o: veins/base/messages/BorderMsg_m.cc \
	veins/base/messages/BorderMsg_m.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h
$O/veins/base/messages/ChannelSenseRequest_m.o: veins/base/messages/ChannelSenseRequest_m.cc \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/ChannelState.h
$O/veins/base/messages/MacPkt_m.o: veins/base/messages/MacPkt_m.cc \
	veins/base/messages/MacPkt_m.h \
	veins/base/utils/SimpleAddress.h
$O/veins/base/modules/BaseApplLayer.o: veins/base/modules/BaseApplLayer.cc
$O/veins/base/modules/BaseBattery.o: veins/base/modules/BaseBattery.cc
$O/veins/base/modules/BaseLayer.o: veins/base/modules/BaseLayer.cc
$O/veins/base/modules/BaseMacLayer.o: veins/base/modules/BaseMacLayer.cc
$O/veins/base/modules/BaseMobility.o: veins/base/modules/BaseMobility.cc
$O/veins/base/modules/BaseModule.o: veins/base/modules/BaseModule.cc
$O/veins/base/modules/BaseWorldUtility.o: veins/base/modules/BaseWorldUtility.cc
$O/veins/base/modules/BatteryAccess.o: veins/base/modules/BatteryAccess.cc
$O/veins/base/phyLayer/BaseDecider.o: veins/base/phyLayer/BaseDecider.cc
$O/veins/base/phyLayer/BasePhyLayer.o: veins/base/phyLayer/BasePhyLayer.cc
$O/veins/base/phyLayer/ChannelInfo.o: veins/base/phyLayer/ChannelInfo.cc
$O/veins/base/phyLayer/ChannelState.o: veins/base/phyLayer/ChannelState.cc
$O/veins/base/phyLayer/Decider.o: veins/base/phyLayer/Decider.cc
$O/veins/base/phyLayer/MappingBase.o: veins/base/phyLayer/MappingBase.cc
$O/veins/base/phyLayer/MappingUtils.o: veins/base/phyLayer/MappingUtils.cc
$O/veins/base/phyLayer/PhyUtils.o: veins/base/phyLayer/PhyUtils.cc
$O/veins/base/phyLayer/Signal.o: veins/base/phyLayer/Signal.cc
$O/veins/base/utils/Coord.o: veins/base/utils/Coord.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h
$O/veins/base/utils/NetwToMacControlInfo.o: veins/base/utils/NetwToMacControlInfo.cc
$O/veins/base/utils/SimpleAddress.o: veins/base/utils/SimpleAddress.cc
$O/veins/base/utils/asserts.o: veins/base/utils/asserts.cc
$O/veins/base/utils/winsupport.o: veins/base/utils/winsupport.cc
$O/veins/modules/analogueModel/BreakpointPathlossModel.o: veins/modules/analogueModel/BreakpointPathlossModel.cc
$O/veins/modules/analogueModel/GenericFading.o: veins/modules/analogueModel/GenericFading.cc
$O/veins/modules/analogueModel/JakesFading.o: veins/modules/analogueModel/JakesFading.cc
$O/veins/modules/analogueModel/LogNormalShadowing.o: veins/modules/analogueModel/LogNormalShadowing.cc
$O/veins/modules/analogueModel/NakagamiFading.o: veins/modules/analogueModel/NakagamiFading.cc
$O/veins/modules/analogueModel/PERModel.o: veins/modules/analogueModel/PERModel.cc
$O/veins/modules/analogueModel/SimpleObstacleShadowing.o: veins/modules/analogueModel/SimpleObstacleShadowing.cc
$O/veins/modules/analogueModel/SimplePathlossModel.o: veins/modules/analogueModel/SimplePathlossModel.cc
$O/veins/modules/analogueModel/TwoRayInterferenceModel.o: veins/modules/analogueModel/TwoRayInterferenceModel.cc
$O/veins/modules/application/ieee80211p/BaseWaveApplLayer.o: veins/modules/application/ieee80211p/BaseWaveApplLayer.cc
$O/veins/modules/application/platooning/UnicastProtocol.o: veins/modules/application/platooning/UnicastProtocol.cc
$O/veins/modules/application/platooning/apps/BaseApp.o: veins/modules/application/platooning/apps/BaseApp.cc
$O/veins/modules/application/platooning/apps/SimplePlatooningApp.o: veins/modules/application/platooning/apps/SimplePlatooningApp.cc
$O/veins/modules/application/platooning/messages/PlatooningBeacon_m.o: veins/modules/application/platooning/messages/PlatooningBeacon_m.cc \
	veins/modules/application/platooning/messages/PlatooningBeacon_m.h
$O/veins/modules/application/platooning/messages/UnicastMessage_m.o: veins/modules/application/platooning/messages/UnicastMessage_m.cc \
	veins/modules/application/platooning/messages/UnicastMessage_m.h
$O/veins/modules/application/platooning/messages/UnicastProtocolControlMessage_m.o: veins/modules/application/platooning/messages/UnicastProtocolControlMessage_m.cc \
	veins/modules/application/platooning/messages/UnicastProtocolControlMessage_m.h
$O/veins/modules/application/platooning/protocols/BaseProtocol.o: veins/modules/application/platooning/protocols/BaseProtocol.cc
$O/veins/modules/application/platooning/protocols/SimplePlatooningBeaconing.o: veins/modules/application/platooning/protocols/SimplePlatooningBeaconing.cc \
	veins/modules/application/platooning/protocols/BaseProtocol.h \
	veins/modules/application/platooning/protocols/SimplePlatooningBeaconing.h
$O/veins/modules/application/platooning/scenarios/AccelerateAndBrakeScenario.o: veins/modules/application/platooning/scenarios/AccelerateAndBrakeScenario.cc
$O/veins/modules/application/platooning/scenarios/BaseScenario.o: veins/modules/application/platooning/scenarios/BaseScenario.cc
$O/veins/modules/application/platooning/scenarios/BrakingScenario.o: veins/modules/application/platooning/scenarios/BrakingScenario.cc
$O/veins/modules/application/platooning/scenarios/SinusoidalScenario.o: veins/modules/application/platooning/scenarios/SinusoidalScenario.cc
$O/veins/modules/application/platooning/traffic/PlatoonsTrafficManager.o: veins/modules/application/platooning/traffic/PlatoonsTrafficManager.cc \
	veins/modules/application/platooning/traffic/PlatoonsTrafficManager.h
$O/veins/modules/application/platooning/traffic/SimpleHeterogenous.o: veins/modules/application/platooning/traffic/SimpleHeterogenous.cc \
	veins/modules/application/platooning/traffic/SimpleHeterogenous.h
$O/veins/modules/application/platooning/utilities/BasePositionHelper.o: veins/modules/application/platooning/utilities/BasePositionHelper.cc
$O/veins/modules/application/platooning/utilities/PositionHelper.o: veins/modules/application/platooning/utilities/PositionHelper.cc
$O/veins/modules/application/traci/TraCIDemo11p.o: veins/modules/application/traci/TraCIDemo11p.cc
$O/veins/modules/application/traci/TraCIDemoRSU11p.o: veins/modules/application/traci/TraCIDemoRSU11p.cc
$O/veins/modules/application/traci/TraCITestApp.o: veins/modules/application/traci/TraCITestApp.cc
$O/veins/modules/mac/ieee80211p/Mac1609_4.o: veins/modules/mac/ieee80211p/Mac1609_4.cc
$O/veins/modules/messages/AirFrame11p_m.o: veins/modules/messages/AirFrame11p_m.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/Signal_.h \
	veins/modules/messages/AirFrame11p_m.h
$O/veins/modules/messages/Mac80211Pkt_m.o: veins/modules/messages/Mac80211Pkt_m.cc \
	veins/base/messages/MacPkt_m.h \
	veins/base/utils/SimpleAddress.h \
	veins/modules/messages/Mac80211Pkt_m.h
$O/veins/modules/messages/PhyControlMessage_m.o: veins/modules/messages/PhyControlMessage_m.cc \
	veins/modules/messages/PhyControlMessage_m.h
$O/veins/modules/messages/WaveShortMessage_m.o: veins/modules/messages/WaveShortMessage_m.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/modules/messages/WaveShortMessage_m.h
$O/veins/modules/mobility/traci/SumoTrafficManager.o: veins/modules/mobility/traci/SumoTrafficManager.cc \
	veins/modules/mobility/traci/SumoTrafficManager.h
$O/veins/modules/mobility/traci/TestTrafficManager.o: veins/modules/mobility/traci/TestTrafficManager.cc
$O/veins/modules/mobility/traci/TraCIBaseTrafficManager.o: veins/modules/mobility/traci/TraCIBaseTrafficManager.cc \
	veins/modules/mobility/traci/TraCIBaseTrafficManager.h
$O/veins/modules/mobility/traci/TraCIBuffer.o: veins/modules/mobility/traci/TraCIBuffer.cc
$O/veins/modules/mobility/traci/TraCIColor.o: veins/modules/mobility/traci/TraCIColor.cc
$O/veins/modules/mobility/traci/TraCICommandInterface.o: veins/modules/mobility/traci/TraCICommandInterface.cc
$O/veins/modules/mobility/traci/TraCIConnection.o: veins/modules/mobility/traci/TraCIConnection.cc
$O/veins/modules/mobility/traci/TraCILauncher.o: veins/modules/mobility/traci/TraCILauncher.cc
$O/veins/modules/mobility/traci/TraCIMobility.o: veins/modules/mobility/traci/TraCIMobility.cc
$O/veins/modules/mobility/traci/TraCIScenarioManager.o: veins/modules/mobility/traci/TraCIScenarioManager.cc
$O/veins/modules/mobility/traci/TraCIScenarioManagerForker.o: veins/modules/mobility/traci/TraCIScenarioManagerForker.cc
$O/veins/modules/mobility/traci/TraCIScenarioManagerInet.o: veins/modules/mobility/traci/TraCIScenarioManagerInet.cc
$O/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o: veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.cc
$O/veins/modules/mobility/traci/TraCIScreenRecorder.o: veins/modules/mobility/traci/TraCIScreenRecorder.cc
$O/veins/modules/obstacle/Obstacle.o: veins/modules/obstacle/Obstacle.cc
$O/veins/modules/obstacle/ObstacleControl.o: veins/modules/obstacle/ObstacleControl.cc
$O/veins/modules/phy/Decider80211p.o: veins/modules/phy/Decider80211p.cc
$O/veins/modules/phy/NistErrorRate.o: veins/modules/phy/NistErrorRate.cc
$O/veins/modules/phy/PhyLayer80211p.o: veins/modules/phy/PhyLayer80211p.cc
$O/veins/modules/phy/SNRThresholdDecider.o: veins/modules/phy/SNRThresholdDecider.cc
$O/veins/modules/world/annotations/AnnotationDummy.o: veins/modules/world/annotations/AnnotationDummy.cc
$O/veins/modules/world/annotations/AnnotationManager.o: veins/modules/world/annotations/AnnotationManager.cc

