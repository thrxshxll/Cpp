#include <iostream>
#include "3.14.h"

using namespace std;

int main(){

	MotorVihicle my{"Mustang", "Diesel", 1973};

	cout << "Details: " << endl;
	my.displayCarDetails();
}