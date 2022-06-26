#include <iostream>
#include "Account-3.9.h"

using namespace std;

int main(){

	Account account1{"Jane Green", 50};
	Account account2{"John Blue", -7};

	cout << "Account name: " << account1.getName() << endl;
	cout << "Balance : " << account1.getBalance() << endl;
	cout << "withdraw 16"<< endl;
	account1.withdraw(16);
	cout << "Balance : " << account1.getBalance() << endl;
}