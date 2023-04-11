#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    return static_cast<int>(std::time(nullptr) - timeOfEntry) * 0.75;
}
