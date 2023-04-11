#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    return static_cast<int>(std::time(nullptr) - timeOfEntry) * 0.9;
}
