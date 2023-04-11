#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id);
    int getParkingDuration() const override;
};
