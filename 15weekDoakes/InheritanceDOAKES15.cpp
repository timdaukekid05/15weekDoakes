#include "Vehicle.h" 
#include "Car.h" 
#include "Truck.h"
#include "TDPL.h"


int getMenu();

void getVehicle();
void getCar();
void getTruck();

int main() {
	int menuChoice =0;

	do {
		menuChoice = getMenu();
		//cin.ignore(100, '\n');
		switch (menuChoice) {

		case 1:getVehicle();
			break;

		case 2: getCar();

			break;
		case 3: getTruck();


			break;

		case 4: endProgram();

			break;
		}
	} while (menuChoice != 4);
}
int getMenu() {

	int menu = 0;
	cout << "Enter option wanted" << endl;
	cout << "1. get vehicle" << endl;
	cout << "2. get Car" << endl;
	cout << "3. get truck" << endl;
	cout << "4. end program" << endl;
	cin >> menu;

	return menu;
}

void getVehicle() {
	int userYear = 0;

	Vehicle vehicle;
	string userManufactuer;
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer for your vehicle. ";
	cout << "\n" << endl;

	getline(cin, userManufactuer);
	cin.ignore(100, '\n');
	userYear = validateInt("Enter the year of your vehicle. ");
	cout << "\n" << endl;


	vehicle.setManu(userManufactuer);
	vehicle.setYear(userYear);
	vehicle.displayInfo();
	cout << endl;
}

void getTruck()
{
	int userCapacity = 0;
	int userYear = 0;


	Truck truck;
	string userManufactuer;
	cout << "Truck:" << endl;
	cout << "Enter the manufacturer for your vehicle.";
	cout << "\n" << endl;

	getline(cin, userManufactuer);

	userYear = validateInt("Enter the year of your vehicle. ");
	userCapacity = validateInt("Enter the truck towing capacity. ");
	cout << "\n" << endl;


	truck.setManu(userManufactuer);
	truck.setYear(userYear);
	truck.setCapacity(userCapacity);
	truck.displayTruckInfo();
	cout << endl;

}
void getCar() {
	Car car;
	string userManufactuer;
	int userYear = 0;
	int userDoors = 0;
	cout << "Car:" << endl;
	cout << "Enter the manufacturer for your vehicle. ";
	cout << "\n" << endl;

	getline(cin, userManufactuer);

	userYear = validateInt("Enter the year of your vehicle. ");
	userDoors = validateInt("Enter the car door amount. ");
	cout << "\n" << endl;


	car.setManu(userManufactuer);
	car.setYear(userYear);
	car.displayCarInfo();
	cout << endl;

}