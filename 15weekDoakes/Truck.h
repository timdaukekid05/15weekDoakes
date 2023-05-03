#pragma once
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

class Truck : public Vehicle {

private:

	int capacity = 0;

public:


	Truck() {};

	void setCapacity(int);
	Truck(int);
	int getCapacity();
	void displayTruckInfo();

};
