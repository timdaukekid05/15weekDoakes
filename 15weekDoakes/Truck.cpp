#include "Truck.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;



Truck::Truck(int towCap)
{
	towCap = capacity;
	cout << "\n" << endl;

}
int Truck::getCapacity()
{
	return capacity;
	cout << "\n" << endl;


}

void Truck::displayTruckInfo() {
	Vehicle::displayInfo();
	cout << "Truck towing capacity :" << capacity << endl;
	cout << "\n" << endl;
}
void Truck::setCapacity(int a) {
	capacity = a;
	cout << "\n" << endl;

}
