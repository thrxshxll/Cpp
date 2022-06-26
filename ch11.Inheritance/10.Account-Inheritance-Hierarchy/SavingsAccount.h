// SavingsAccount class defintion.
// SavingsAccount class member functions are defined in SavingsAccount.cpp

#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class SavingsAccount : public Account {
public:
    // default constructor
    SavingsAccount(double =0.0, double =0.0);

    void setInterestRate(double);
    double getInterestRate() const;

    void addInterest();
    double calculateInterest() const;

private:
    double interestRate;
};

#endif