#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
  ParkingLot parkingLot(10);
  
  while (parkingLot.getCount() < 10) {
    std::cout << "Enter the type of vehicle to park (car/bus/motorbike): ";
    std::string type;
    std::cin >> type;
    
    int id;
    std::cout << "Enter the ID of the vehicle: ";
    std::cin >> id;
    
    Vehicle* vehicle = nullptr;
    if (type == "car") {
      vehicle = new Car(id);
    } else if (type == "bus") {
      vehicle = new Bus(id);
    } else if (type == "motorbike") {
      vehicle = new Motorbike(id);
    } else {
      std::cout << "Invalid vehicle type" << std::endl;
      continue;
    }
    
    parkingLot.parkVehicle(vehicle);
    std::cout << "Vehicle " << vehicle->getID() << " parked successfully" << std::endl;
  }
  
  std::cout << "The parking lot is full" << std::endl;
  
  int idToUnpark;
  std::cout << "Enter the ID of the vehicle to unpark: ";
  std::cin >> idToUnpark;
  
  if (parkingLot.unparkVehicle(idToUnpark)) {
    std::cout << "Vehicle " << idToUnpark << " unparked successfully" << std::endl;
  } else {
    std::cout << "Vehicle " << idToUnpark << " not found in the lot" << std::endl;
  }
  
  return 0;
}
