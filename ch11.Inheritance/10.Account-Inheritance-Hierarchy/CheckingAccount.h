// CheckingAccount class definition.
// Member functions are defined in CheckingAccount.cpp

#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class CheckingAccount : public Account {
public:
    // default constructor
    CheckingAccount(double =0.0, double =0.0);

    void setFeePerTransaction(double arg);
    double getFeePerTransaction() const;

    bool credit(double);
    bool debit(double);

private:
    double feePerTransaction;
};

#endif