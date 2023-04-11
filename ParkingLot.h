#pragma once
#include "Vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    int vehicleCount;
    Vehicle** vehicles;
public:
    ParkingLot(int capacity);
    ~ParkingLot();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int ID);
    int getCount() const;
    int countOverstayingVehicles(int maxParkingDuration) const;
};
