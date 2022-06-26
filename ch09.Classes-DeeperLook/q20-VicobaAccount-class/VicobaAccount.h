/**
 * Basic VicobaAccount class to track customers's loans of the microfinance that lend money
 * and charges an anual interest rate by the loan.
 * */

// VicobaAccount class definition.
// Member funcions are define in VicobaAccount.cpp

#ifndef VICOBAACCOUNT_H
#define VICOBAACCOUNT_H

class VicobaAccount{
public:
    // constructor
    explicit VicobaAccount(double loanAmount =0, unsigned int loanDuration =0);

    double moneyToRepay() const;

    // set functions
    void setAmountBorrowed(const double);
    void setLoanDuration(const unsigned int);
    static void setInterestRate(const double); // static funtion
    
    // get functions
    double getAmountBorrowed() const;
    unsigned int getLoanDuration() const;
    static double getInterestRate();

private:
    double amountBorrowed{0}; // amount money lent
    unsigned int loanDuration{0}; // loan duration in year

    static double interestRate; // anual interest rate
};

#endif