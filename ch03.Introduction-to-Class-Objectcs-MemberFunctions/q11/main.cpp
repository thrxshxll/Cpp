#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main(){

	MotorVehicle my{"Mustang", "Diesel", 1973};

	cout << "Details:\n" << my.displayCarDetails() << endl;

	cout << "what is Car's color? ";
	string xcolor;
	getline(cin, xcolor);
	my.setColor(xcolor);
}