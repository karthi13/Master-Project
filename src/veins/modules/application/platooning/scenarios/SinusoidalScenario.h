//
// Copyright (c) 2012-2016 Michele Segata <segata@ccs-labs.org>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

<<<<<<< HEAD
=======

/*File Modified by Karthikeyan*/

>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
#ifndef SINUSOIDALSCENARIO_H_
#define SINUSOIDALSCENARIO_H_

#include "veins/modules/application/platooning/scenarios/BaseScenario.h"

class SinusoidalScenario : public BaseScenario
{

	public:

		virtual void initialize(int stage);
		virtual void finish();

	protected:
<<<<<<< HEAD

=======
		Veins::TraCIMobility* mobility;
		Veins::TraCICommandInterface::Vehicle *traciVehicle;
		BasePositionHelper *positionHelper;
>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
		//frequency at which the leader speed is oscillating
		double leaderOscillationFrequency;
		//oscillation amplitude
		double oscillationAmplitude;
		//leader average speed
		double leaderSpeed;
		//message used to tell the leader to continuously change its desired speed
		cMessage *changeSpeed;
		//start oscillation time
		SimTime startOscillating;
<<<<<<< HEAD

=======
		//message used to tell the height of the vehicle
		cMessage *heightOfVeh;
		cMessage *widthOfVeh;
		cMessage *typeOfVeh;
>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
	public:
		SinusoidalScenario() {
			leaderOscillationFrequency = 0;
			oscillationAmplitude = 0;
			leaderSpeed = 0;
			changeSpeed = 0;
<<<<<<< HEAD
=======
			heightOfVeh = 0;
			widthOfVeh = 0;
			typeOfVeh = 0;
>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
			startOscillating = SimTime(0);
		}

	protected:

		virtual void handleSelfMsg(cMessage *msg);
<<<<<<< HEAD

=======
>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
};

#endif
