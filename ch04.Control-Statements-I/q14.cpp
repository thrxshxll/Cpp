#include <iostream>
using namespace std;

int main(){
	unsigned int accountNumber;

	cout << "Enter account number [ 0 to quit ]: ";
	cin >> accountNumber;

	while(accountNumber){

		double bbalance, tcharges, tcredits, climit;

		cout << "Beginning balance: ";
		cin >> bbalance;

		cout << "Total charges: ";
		cin >> tcharges;

		cout << "Total credits: ";
		cin >> tcredits;

		cout << "Credit limit: ";
		cin >> climit;

		double newBalance{bbalance + tcharges - tcredits};

		cout << "New balance is " << newBalance << endl;

		if(newBalance > climit){
			cout << "Account:" << accountNumber << "\nCredit limit: " << climit << "\nBalance: " << newBalance << "\nCredit Limit Exceeded." << endl;
		}

		cout << "Enter account number [ 0 to quit ]: ";
		cin >> accountNumber;
	}
}