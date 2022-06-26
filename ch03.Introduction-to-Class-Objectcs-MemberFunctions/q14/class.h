#include <iostream>

Class Account{
public:

	Account(unsigned int iaccountNumber, std::string ifirstName, std::string ilastNmame, double ibalance)
	: accountNumber{iaccountNumber}, firstName{ifirstName}, lastNmame{ilastNmame}, balance{ibalance} {

	}


private:
	unsigned int accountNumber;
	std::string firstName;
	std::string lastName;
	double balance;
};