/*

10.8 (Enhanced MotorVehicle Class) Enhance the MotorVehicle class of Exercise 3.11 by over-
loading the following operators:

a) Equality (==) : two MotorVehicle objects are equal (identical) if all their attributes are
identical, that is, they of the same make, they use the same type of fuel, they were manu-
factured in the same year, they are of the same color and they have the same engine capacity.
b) Not equal ( != ) : two MotorVehicle objects are not equal (not identical) if any of their
attributes do not match.
c) Greater than ( > ): A MotorVehicle object is greater than another MotorVehicle object if
the former was manufactured before the latter.
d) Output operator (<<) : displays a MotorVehicle in a similar fashion to the displayCarDetails
function.

Write a test program to demonstrate the capabilities of the enhanced MotorVehicle class.

*/

#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main(){

	MotorVehicle car0{"Mustang", "Diesel", 1973};
	MotorVehicle car1{"Porsche", "Gas", 2000};

	cout << boolalpha << "car0 == car1 ? " << (car0 == car1) << endl;
	cout << boolalpha << "car0 != car1 ? " << (car0 != car1) << endl;
	cout << "car0 > car1 ? " << (car0 > car1) << endl;

	cout << "\n" << car0 << "\n\n" << car1 << endl;

}