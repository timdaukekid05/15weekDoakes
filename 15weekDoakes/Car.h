#pragma once
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

class Car : public Vehicle {

private:

	int doorNum = 0;

public:

	Car() {};

	Car(int);
	int getDoor();
	void displayCarInfo();
};
