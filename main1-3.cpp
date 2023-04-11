#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
  ParkingLot parkingLot(10);

  // Park 5 cars, 3 buses, and 2 motorbikes in the parking lot
  for (int i = 1; i <= 5; i++) {
    Car* car = new Car(i);
    parkingLot.parkVehicle(car);
  }
  for (int i = 6; i <= 8; i++) {
    Bus* bus = new Bus(i);
    parkingLot.parkVehicle(bus);
  }
  for (int i = 9; i <= 10; i++) {
    Motorbike* motorbike = new Motorbike(i);
    parkingLot.parkVehicle(motorbike);
  }

  // Count the number of vehicles that have overstayed in the parking lot
  int overstayingCount = parkingLot.countOverstayingVehicles(15);
  std::cout << "Number of vehicles that have overstayed in the parking lot: " << overstayingCount << std::endl;

  return 0;
}
