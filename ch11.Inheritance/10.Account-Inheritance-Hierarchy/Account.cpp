// Account class member functions definition.

#include <stdexcept>
#include "Account.h"
using namespace std;

Account::Account(double _balance){
    setBalance(_balance);
}

void Account::setBalance(double arg){
    if(arg < 0.0){
        throw invalid_argument{"Balance must be greater than or equal to 0.0"};
    }
    balance = arg;
}
double Account::getBalance() const{
    return balance;
}


bool Account::credit(double arg){
    if(arg < 0.0){
        throw invalid_argument{"Value to be add to balance must be greater than 0.0"};
    }
    balance += arg;
    return 1;
}


bool Account::debit(double arg){
    if(arg > getBalance() || arg < 0.0){
        throw invalid_argument{"Debit amount exceeded account balance"};
    }
    balance -= arg;
    return 1;
}