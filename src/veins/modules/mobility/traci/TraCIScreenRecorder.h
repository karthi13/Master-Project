//
// Copyright (C) 2006-2014 Christoph Sommer <sommer@ccs-labs.org>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#ifndef WORLD_TRACI_TRACISCREENRECORDER_H
#define WORLD_TRACI_TRACISCREENRECORDER_H

#include "/home/hh-ide/src/plexe-veins/src/veins/base/utils/MiXiMDefs.h"

/**
 * @brief
 * Simple support module to take (a series of) screenshots of a simulation running in the TraCI server.
 *
 * Note that the TraCI server needs to be run in GUI mode and support taking screenshots for this to work.
 *
 * The screenshots can then be converted to a video using something along the lines of
 * mencoder 'mf://results/screenshot-*.png' -mf w=800:h=600:fps=25:type=png -ovc lavc -lavcopts vcodec=mpeg4:mbd=2:trell -oac copy -o output.avi
 *
 * See the Veins website <a href="http://veins.car2x.org/"> for a tutorial, documentation, and publications </a>.
 *
 * @author Christoph Sommer
 *
 * @see TraCIScenarioManager
 *
 */
namespace Veins {
class TraCIScreenRecorder : public cSimpleModule
{
	public:

		virtual void initialize(int stage);
		virtual void handleMessage(cMessage *msg);
		virtual void finish();

	protected:

		cMessage* takeScreenshot;
};
}

#endif
