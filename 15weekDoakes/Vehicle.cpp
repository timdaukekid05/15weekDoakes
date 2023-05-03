#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;


Vehicle::Vehicle(string vehicleManufacturer, int vehicleYear)
{
	manufacturer = vehicleManufacturer;
	year = vehicleYear;
	cout << "\n" << endl;

}
void Vehicle::displayInfo() {
	cout << "Vehicle Manufacturer : " << manufacturer << endl;
	cout << "Vehicle Year : " << year << endl;
	cout << "\n" << endl;
}


void Vehicle::setManu(string b) {
	manufacturer = b;
	cout << "\n" << endl;

}


int Vehicle::getYear() {
	return year;
	cout << "\n" << endl;

}

void Vehicle::setYear(int a) {
	year = a;
	cout << "\n" << endl;

}


string Vehicle::getManu() {
	return string(manufacturer);
	cout << "\n" << endl;

}
