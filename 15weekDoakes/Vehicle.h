#pragma once
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

class Vehicle {

protected:

	string manufacturer;
	int year = 0;

public:

	Vehicle() {};

	Vehicle(string vehicleManufacturer, int vehicleYear);
	void displayInfo();
	void setYear(int a);
	void setManu(string b);
	int getYear();
	string getManu();

};