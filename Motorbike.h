#pragma once
#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int id);
    int getParkingDuration() const override;
};
