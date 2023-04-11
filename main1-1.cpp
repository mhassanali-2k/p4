#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
  int numVehicles;
  std::cout << "Enter the number of vehicles to park: ";
  std::cin >> numVehicles;
  
  Vehicle* vehicles[numVehicles];
  
  for (int i = 0; i < numVehicles; i++) {
    std::cout << "Enter the type of vehicle (car/bus/motorbike): ";
    std::string type;
    std::cin >> type;
    
    int id;
    std::cout << "Enter the ID of the vehicle: ";
    std::cin >> id;
    
    if (type == "car") {
      vehicles[i] = new Car(id);
    } else if (type == "bus") {
      vehicles[i] = new Bus(id);
    } else if (type == "motorbike") {
      vehicles[i] = new Motorbike(id);
    } else {
      std::cout << "Invalid vehicle type" << std::endl;
      i--;
    }
  }
  
  for (int i = 0; i < numVehicles; i++) {
    std::cout << "Vehicle " << vehicles[i]->getID() << " has been parked for "
              << vehicles[i]->getParkingDuration() << " seconds" << std::endl;
  }
  
  // Free memory
  for (int i = 0; i < numVehicles; i++) {
    delete vehicles[i];
  }
  
  return 0;
}
