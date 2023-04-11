#pragma once
#include <ctime>

class Vehicle {
private:
    int ID;
public:
    std::time_t timeOfEntry;
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() const = 0;
};
