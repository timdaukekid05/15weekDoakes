#pragma once
#include <fstream>
#include <iostream>
#include <cmath>
#include <random>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>/
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int endProgram() {
	cout << "\n\nPress enter to exit...";
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}
int validateInt(string prompt) {
	int number = 0;
	cout << prompt;

	while (!(cin >> number) || cin.fail()) {
		cout << "\nERROR: Try Again.." << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
int validateInt(string prompt, int from, int to) {
	cout << prompt;
	int number = 0;
	while (!(cin >> number) || cin.fail() || number < from || number > to) {
		cout << "\ERROR: Try again" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
float validatefloat(string prompt) {
	cout << prompt;
	float number = 0;
	while (!(cin >> number) || cin.fail()) {
		cout << "\nERROR: Try Again.." << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
float validatefloat(string prompt, float from, float to) {
	cout << prompt;
	float number = 0;
	while (!(cin >> number) || cin.fail() || number < from || number > to) {
		cout << "\ERROR: Try again" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
double validatedouble(string prompt) {
	cout << prompt;
	double number = 0;

	while (!(cin >> number) || cin.fail()) {
		cout << "\nERROR: Try Again.." << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
double validatedouble(string prompt, double from, double to) {
	cout << prompt;
	double number = 0;
	while (!(cin >> number) || cin.fail() || number < from || number > to) {
		cout << "\ERROR: Try again" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
char validatechar(string prompt, char from, char to) {
	cout << prompt;
	char number = 0;
	while (!(cin >> number) || cin.fail() || number < from || number > to) {
		cout << "\ERROR: Try again" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}

