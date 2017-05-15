/*
 * SimpleHeterogenous.h
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

#ifndef SRC_VEINS_MODULES_APPLICATION_PLATOONING_TRAFFIC_SIMPLEHETEROGENOUS_H_
#define SRC_VEINS_MODULES_APPLICATION_PLATOONING_TRAFFIC_SIMPLEHETEROGENOUS_H_

#include "/home/hh-ide/src/plexe-veins/src/veins/modules/mobility/traci/TraCIBaseTrafficManager.h"
#include "/home/hh-ide/src/plexe-veins/src/veins/modules/mobility/traci/TraCICommandInterface.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class SimpleHeterogenous :public TraCIBaseTrafficManager{
public:
    SimpleHeterogenous();
    virtual ~SimpleHeterogenous();

    virtual void initialize(int stage);
    virtual void finish();

    Veins::TraCICommandInterface::Vehicle *traciInterface;
protected:
    //this is used to start traffic generation
    cMessage *insertPlatoonMessage;

    //void insertPlatoons();
    void insertPlatoonsWithHeterogeneousVehicles();
    double getPlatoonLength();

    void convertStringToVector(std::string word);

    virtual void handleSelfMsg(cMessage *msg);

    SimTime platoonInsertTime;
    double platoonInsertSpeed;

    //vehicles to be inserted
    struct Vehicle automated;
    struct Vehicle truck;
    struct Vehicle bus;

    //total number of vehicles to be injected
    int nCars;
    int nTrucks;// newly added vehicle type truck(for instance)
    int nBus;// newly added vehicle type Bus(for instance)
    //vehicles per platoon
    int platoonSize;
    //number of lanes
    int nLanes;
    //insert distance
    double platoonInsertDistance;
    //insert headway
    double platoonInsertHeadway;
    //headway for leader vehicles
    double platoonLeaderHeadway;
    //sumo vehicle type of platooning cars
    std::string platooningVType;

    std::string vehicleTypeInPlatoon;

    //sumo vehicle type of platooning truck and bus with cars
    std::string platooningVTypeTruck;
    std::string platooningVTypeBus;

    //Length variable of the vehicles
    int carLength;
    int truckLength;
    int busLength;

    std::vector<int> vehicleInOrder;

    virtual void scenarioLoaded();

};

#endif /* SRC_VEINS_MODULES_APPLICATION_PLATOONING_TRAFFIC_SIMPLEHETEROGENOUS_H_ */
