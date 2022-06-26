#include <iostream>
using namespace std;

int main(){
	int counter{0}, largest{0};

	while(counter<10){
		int number;
		cout << "Enter integer: ";
		cin >> number;

		if(largest < number){
			largest=number;
		}
		counter++;
	}
	cout << "Largest Number: " << largest << endl;
}