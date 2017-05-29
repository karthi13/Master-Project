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
#include "veins/modules/application/platooning/scenarios/SinusoidalScenario.h"

Define_Module(SinusoidalScenario);

void SinusoidalScenario::initialize(int stage) {

	BaseScenario::initialize(stage);

	if (stage == 1) {
		//get the oscillation frequency of the leader as parameter
		leaderOscillationFrequency = par("leaderOscillationFrequency").doubleValue();
		//oscillation amplitude
		oscillationAmplitude = par("oscillationAmplitude").doubleValue() / 3.6;
		//average speed
		leaderSpeed = par("leaderSpeed").doubleValue() / 3.6;
		//start oscillation time
		startOscillating = SimTime(par("startOscillating").doubleValue());
<<<<<<< HEAD

		if (positionHelper->getId() < positionHelper->getLanesCount()) {
			//setup oscillation message, only if i'm part of the first leaders
			changeSpeed = new cMessage("changeSpeed");
			if (simTime() > startOscillating) {
				startOscillating = simTime();
				scheduleAt(simTime(), changeSpeed);
			}
			else {
				scheduleAt(startOscillating, changeSpeed);
			}
=======
		heightOfVeh = new cMessage("heightOfVeh");
		widthOfVeh = new cMessage("widthOfVeh");
		typeOfVeh = new cMessage("typeOfVeh");

		positionHelper = FindModule<BasePositionHelper*>::findSubModule(getParentModule());
		mobility = Veins::TraCIMobilityAccess().get(getParentModule());
		traciVehicle = mobility->getVehicleCommandInterface();

		if (positionHelper->getId() < positionHelper->getLanesCount()) {
			//setup oscillation message, only if i'm part of the first leaders
			    changeSpeed = new cMessage("changeSpeed");

				scheduleAt(simTime(), changeSpeed);
				scheduleAt(simTime(), heightOfVeh);
				scheduleAt(simTime(), widthOfVeh);
				scheduleAt(simTime(), typeOfVeh);


>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
			//set base cruising speed
			traciVehicle->setCruiseControlDesiredSpeed(leaderSpeed);
		}
		else {
			//let the follower set a higher desired speed to stay connected
			//to the leader when it is accelerating
<<<<<<< HEAD
			traciVehicle->setCruiseControlDesiredSpeed(leaderSpeed + 2 * oscillationAmplitude);
=======
//			traciVehicle->setCruiseControlDesiredSpeed(leaderSpeed + 2 * oscillationAmplitude);
		    traciVehicle->setCruiseControlDesiredSpeed(leaderSpeed);
			traciVehicle->setActiveController(2);

			scheduleAt(simTime(), heightOfVeh);
			scheduleAt(simTime(), widthOfVeh);
			scheduleAt(simTime(), typeOfVeh);
>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
		}

	}

}

void SinusoidalScenario::finish() {
	cancelAndDelete(changeSpeed);
	changeSpeed = 0;
<<<<<<< HEAD
=======
	cancelAndDelete(heightOfVeh);
	heightOfVeh = 0;
    cancelAndDelete(widthOfVeh);
    widthOfVeh = 0;
    cancelAndDelete(typeOfVeh);
    typeOfVeh = 0;
>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
	BaseScenario::finish();
}

void SinusoidalScenario::handleSelfMsg(cMessage *msg) {
	BaseScenario::handleSelfMsg(msg);
	if (msg == changeSpeed) {
<<<<<<< HEAD
		traciVehicle->setCruiseControlDesiredSpeed(
		    leaderSpeed +
		    oscillationAmplitude *
		    sin(2 * M_PI * (simTime() - startOscillating).dbl() * leaderOscillationFrequency)
		);
		scheduleAt(simTime() + SimTime(0.1), changeSpeed);
	}
=======
		traciVehicle->setCruiseControlDesiredSpeed(leaderSpeed);

//		scheduleAt(simTime() + SimTime(0.1), changeSpeed);
	}
	if(msg == heightOfVeh){
	    double h = traciVehicle->getVehicleHeight();
	    scheduleAt(simTime() + SimTime(10), heightOfVeh);
	    int ID = positionHelper->getId();
	    bool P = positionHelper->isInSamePlatoon(ID);
	    int leadre_ID = positionHelper->getLeaderId();
	    int pl_pos = positionHelper->getPosition();

	    double distance, relSpeed, acceleration, speed, controllerAcceleration, posX, posY, time;
	    traciVehicle->getRadarMeasurements(distance, relSpeed);
	    traciVehicle->getVehicleData(speed, acceleration, controllerAcceleration, posX, posY, time);

	    bool P2 = P;
	}
    if(msg == widthOfVeh){
        double w = traciVehicle->getVehicleWidth();

        int pos = positionHelper->getPosition();
        double distance, relSpeed, acceleration, speed, controllerAcceleration, posX, posY, time;
        traciVehicle->getRadarMeasurements(distance, relSpeed);
        traciVehicle->getVehicleData(speed, acceleration, controllerAcceleration, posX, posY, time);
         scheduleAt(simTime() + SimTime(10), widthOfVeh);
    }
    if(msg == typeOfVeh){
        std::string s1 = traciVehicle->getTypeId();
        scheduleAt(simTime() + SimTime(10), typeOfVeh);
    }
>>>>>>> bf58de06e2a6a24815d36343e10982693cf94a7b
}
