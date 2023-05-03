#include "Car.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(int numDoor)
{
	doorNum = numDoor;
	cout << "\n" << endl;

}

int Car::getDoor()
{
	return doorNum;
	cout << "\n" << endl;

}
void Car::displayCarInfo()
{
	Vehicle::displayInfo();
	cout << "displaying car doors" << endl;
	cout << "Car Doors :" << doorNum << endl;
	cout << "\n" << endl;
}