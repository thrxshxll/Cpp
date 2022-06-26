#include <iostream>
#include "class.h"

using namespace std;

int main(){

	int month, day, year;
	 
	cout << "month: ";
	cin >> month;

	cout << "day: ";
	cin >> day;

	cout << "year: ";
	cin >> year;

	Date today{month, day, year};
	today.displayDate();
}