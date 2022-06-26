// SavingsAccount class member funtions defintion.

#include <stdexcept>
#include "SavingsAccount.h"
using namespace std;

// default constructor
SavingsAccount::SavingsAccount(double _balance, double _interestRate)
:   Account{_balance} {
    setInterestRate(_interestRate);
}


void SavingsAccount::setInterestRate(double arg){
    if(arg <= 0.0){
        throw invalid_argument{"Interest Rate must be greater than 0.0"};
    }
    interestRate = arg;
}

double SavingsAccount::getInterestRate() const{
    return interestRate;
}


void SavingsAccount::addInterest(){
    Account::credit(calculateInterest());
}


double SavingsAccount::calculateInterest() const{
    return getInterestRate() * Account::getBalance();
}
