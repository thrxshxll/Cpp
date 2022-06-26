// CheckingAccount class member functions definition.

#include <stdexcept>
#include "CheckingAccount.h"
using namespace std;

// default constructor
CheckingAccount::CheckingAccount(double _balance, double _feePerTransaction)
:   Account{_balance},
    feePerTransaction{_feePerTransaction} { }


void CheckingAccount::setFeePerTransaction(double arg){
    feePerTransaction = arg;
}
double CheckingAccount::getFeePerTransaction() const{
    return feePerTransaction;
}


bool CheckingAccount::credit(double arg){
    if(!Account::debit(arg)) return 0;

    Account::debit(getFeePerTransaction());
    return 1;
}


bool CheckingAccount::debit(double arg){
    if(!Account::debit(arg)) return 0;

    Account::debit(getFeePerTransaction());
    return 1;
}
