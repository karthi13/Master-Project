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

#include "/home/hh-ide/src/plexe-veins/src/veins/modules/application/platooning/scenarios/AccelerateAndBrakeScenario.h"

Define_Module(AccelerateAndBrakeScenario);

void AccelerateAndBrakeScenario::initialize(int stage) {

	BaseScenario::initialize(stage);

	if (stage == 0)
		//get pointer to application
		appl = FindModule<BaseApp*>::findSubModule(getParentModule());

	if (stage == 1) {
		//get acceleration
		acceleration = par("acceleration").doubleValue();
		//get braking deceleration
		brakingDeceleration = par("brakingDeceleration").doubleValue();
		//average speed
		leaderSpeed = par("leaderSpeed").doubleValue() / 3.6;
		//start accelerating time
		startAccelerating = SimTime(par("startAccelerating").doubleValue());
		//start braking time
		startBraking = SimTime(par("startBraking").doubleValue());

		//messages to schedule actions
		startAccelerationMsg = new cMessage("startAccelerationMsg");
		startBrakingMsg = new cMessage("startBrakingMsg");

		//enable ACC
		traciVehicle->setActiveController(Plexe::ACC);
		//let the vehicle start from standstill
		traciVehicle->setFixedAcceleration(1, -8);

		//schedule messages
		scheduleAt(startAccelerating, startAccelerationMsg);
		scheduleAt(startBraking, startBrakingMsg);

	}

}

void AccelerateAndBrakeScenario::finish() {
	cancelAndDelete(startAccelerationMsg);
	startAccelerationMsg = 0;
	cancelAndDelete(startBrakingMsg);
	startBrakingMsg = 0;
	BaseScenario::finish();
}

void AccelerateAndBrakeScenario::handleSelfMsg(cMessage *msg) {
	BaseScenario::handleSelfMsg(msg);
	if (msg == startAccelerationMsg)
		traciVehicle->setFixedAcceleration(1, acceleration);
	if (msg == startBrakingMsg)
		traciVehicle->setFixedAcceleration(1, -brakingDeceleration);
}