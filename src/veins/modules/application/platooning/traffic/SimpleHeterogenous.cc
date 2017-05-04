/*
 * SimpleHeterogenous.cc
 *
 *  Created on: Apr 12, 2017
 *      Author: Karthikeyan
 */

//
// Copyright (C) 2017 Karthikeyan <dkarthikeyanmailbox@gmail.com>
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

#include "SimpleHeterogenous.h"

Define_Module(SimpleHeterogenous);

SimpleHeterogenous::SimpleHeterogenous() {
    // TODO Auto-generated constructor stub
    insertPlatoonMessage = 0;
    platoonInsertDistance = 0;
    platoonInsertHeadway = 0;
    platoonInsertSpeed = 0;
    platoonInsertTime = SimTime(0);
    platoonLeaderHeadway = 0;
    platoonSize = 0;
    nCars = 0;
    nTrucks = 0;
    nBus = 0;
    nLanes = 0;
}

SimpleHeterogenous::~SimpleHeterogenous() {
    // TODO Auto-generated destructor stub
}

void SimpleHeterogenous::initialize(int stage){
    TraCIBaseTrafficManager::initialize(stage);

    if (stage == 0) {

        nCars = par("nCars").longValue();
        nTrucks = par("nTrucks").longValue();//let it be equal number to nCars parameter
        nBus = par("nBus").longValue();
        platoonSize = par("platoonSize").longValue();
        nLanes = par("nLanes").longValue();
        platoonInsertTime = SimTime(par("platoonInsertTime").doubleValue());
        platoonInsertSpeed = par("platoonInsertSpeed").doubleValue();
        platoonInsertDistance = par("platoonInsertDistance").doubleValue();
        platoonInsertHeadway = par("platoonInsertHeadway").doubleValue();
        platoonLeaderHeadway = par("platoonLeaderHeadway").doubleValue();
        platooningVType = par("platooningVType").stdstringValue();
        platooningVTypeTruck = par("platooningVTypeTruck").stdstringValue();
        insertPlatoonMessage = new cMessage("");
        scheduleAt(platoonInsertTime, insertPlatoonMessage);

    }
}

void SimpleHeterogenous::scenarioLoaded(){
    automated.id = findVehicleTypeIndex(platooningVType);
    automated.lane = -1;
    automated.position = 0;
    automated.speed = platoonInsertSpeed/3.6;

    truck.id = findVehicleTypeIndex(platooningVTypeTruck);
    truck.lane = -1;
    truck.position = 0;
    truck.speed = platoonInsertSpeed/3.6;

    bus.id = findVehicleTypeIndex(platooningVTypeBus);
    bus.lane = -1;
    bus.position = 0;
    bus.speed = platoonInsertSpeed/3.6;
}

void SimpleHeterogenous::handleSelfMsg(cMessage *msg){
    TraCIBaseTrafficManager::handleSelfMsg(msg);

    if (msg == insertPlatoonMessage) {
        //insertPlatoons();
        insertPlatoonsWithTruck();
    }
}

/*This function gives us the ability to add a truck at a desired position in the platoon */
void SimpleHeterogenous::insertPlatoonsWithTruck(){

    /*FOR NOW THESE PARAMETERS WILL BE SAME AS OF INSERTPLATOONS()*/

    //compute inter vehicle distance
    double distance = platoonInsertSpeed / 3.6 * platoonInsertHeadway + platoonInsertDistance;
    //total number of platoons per lane
    int nPlatoons = nCars + nTrucks + nBus / platoonSize / nLanes;
    //length of 1 platoon
    double platoonLength = platoonSize * 4 + (platoonSize - 1) * distance;
    //inter-platoon distance
    double platoonDistance = platoonInsertSpeed / 3.6 * platoonLeaderHeadway;
    //total length for one lane
    double totalLength = nPlatoons * platoonLength + (nPlatoons - 1) * platoonDistance;

    //for each lane, we create an offset to have misaligned platoons
    double *laneOffset = new double[nLanes];
    for (int l = 0; l < nLanes; l++)
        laneOffset[l] = uniform(0, 20);
    double currentPos = totalLength;
        int currentCar = 0;
        for (int i = 0; i < nCars+nTrucks+nBus/nLanes; i++) {
            for (int l = 0; l < nLanes; l++) {
/*                if(i%2 == 0){
                    automated.position = currentPos + laneOffset[l];
                    automated.lane = l;
                    addVehicleToQueue(0, automated);
                }
                else{
                    truck.position = currentPos + laneOffset[l];
                    truck.lane = l;
                    addVehicleToQueue(0, truck);
                }*/
                for(std::vector<int>::iterator it= vehicleTypeInPlatoon.begin();it != vehicleTypeInPlatoon.end();++it){
                    switch(*it){
                    case 1:
                        automated.position = currentPos + laneOffset[l];
                        automated.lane = l;
                        addVehicleToQueue(0, automated);
                        break;
                    case 2:
                        truck.position = currentPos + laneOffset[l];
                        truck.lane = l;
                        addVehicleToQueue(0, truck);
                        break;
                    case 3:
                        bus.position = currentPos + laneOffset[l];
                        bus.lane = l;
                        addVehicleToQueue(0, bus);
                        break;
                    }
                }

            }
            currentCar++;
            if (currentCar == platoonSize) {
                currentCar = 0;
                //add inter platoon gap
                currentPos -= (platoonDistance + 4);
            }
            else {
                //add intra platoon gap
                currentPos -= (4 + distance);
            }
        }

        delete [] laneOffset;
}
/*
void SimpleHeterogenous::insertPlatoons(){

    //compute inter vehicle distance
    double distance = platoonInsertSpeed / 3.6 * platoonInsertHeadway + platoonInsertDistance;
    //total number of platoons per lane
    int nPlatoons = nCars / platoonSize / nLanes;
    //length of 1 platoon
    double platoonLength = platoonSize * 4 + (platoonSize - 1) * distance;
    //inter-platoon distance
    double platoonDistance = platoonInsertSpeed / 3.6 * platoonLeaderHeadway;
    //total length for one lane
    double totalLength = nPlatoons * platoonLength + (nPlatoons - 1) * platoonDistance;

    //for each lane, we create an offset to have misaligned platoons
    double *laneOffset = new double[nLanes];
    for (int l = 0; l < nLanes; l++)
        laneOffset[l] = uniform(0, 20);

    double currentPos = totalLength;
    int currentCar = 0;
    for (int i = 0; i < nCars/nLanes; i++) {
        for (int l = 0; l < nLanes; l++) {
            automated.position = currentPos + laneOffset[l];
            automated.lane = l;
            addVehicleToQueue(0, automated);
        }
        currentCar++;
        if (currentCar == platoonSize) {
            currentCar = 0;
            //add inter platoon gap
            currentPos -= (platoonDistance + 4);
        }
        else {
            //add intra platoon gap
            currentPos -= (4 + distance);
        }
    }

    delete [] laneOffset;
}
*/
void SimpleHeterogenous::finish(){
    TraCIBaseTrafficManager::finish();
    if (insertPlatoonMessage) {
        cancelAndDelete(insertPlatoonMessage);
        insertPlatoonMessage = 0;
    }
}
