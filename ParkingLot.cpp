#include "ParkingLot.h"

ParkingLot::ParkingLot(int capacity) {
    maxCapacity = capacity;
    vehicleCount = 0;
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < vehicleCount; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (vehicleCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
    } else {
        vehicles[vehicleCount] = vehicle;
        vehicleCount++;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    bool found = false;
    for (int i = 0; i < vehicleCount; i++) {
        if (vehicles[i]->getID() == ID) {
            delete vehicles[i];
            vehicleCount--;
            found = true;
            for (int j = i; j < vehicleCount; j++) {
                vehicles[j] = vehicles[j+1];
            }
            break;
        }
    }
    if (!found) {
        std::
