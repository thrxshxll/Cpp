#include <iostream>
#include <string>
#include "heartrates.h"
// #include "date.h"

using namespace std;

int main(){
	int m,d,y;

	string name, lname;

	cout << "Name: ";
	cin >> name;


	cout << "Last Name: ";
	cin >> lname;

	cout << "Birth Date - mm dd yyy : ";
	cin >> m >> d >> y;

	Date idate(m, d, y);
	HeartRates person{name, lname, idate};

	cout << "\n\nINFOMATION" << endl;
	cout << "Name: " << person.getName() << "\nLast Name: " << person.getLastName() << endl;
	cout << "Birth Date: "; person.getDate();
	cout << "Age: " << person.getAge() << endl;
	cout << "Max Heart Rate: " << person.maxHeartRate() << endl;
	cout << "Target Heart Rate: " << person.targetHeartRate() << endl;
}