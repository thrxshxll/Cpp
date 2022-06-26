#include <cmath>
#include <stdexcept>
#include "VicobaAccount.h"
using namespace std;

double VicobaAccount::interestRate{0};

// constructor
VicobaAccount::VicobaAccount(double loanAmount, unsigned int loanDuration){
    setAmountBorrowed(loanAmount);
    setLoanDuration(loanDuration);
}

double VicobaAccount::moneyToRepay() const{
    return amountBorrowed * pow(1.0 + interestRate, loanDuration);
}

// set functions
void VicobaAccount::setAmountBorrowed(const double arg){
    if(arg >= 0.0){
        amountBorrowed = arg;        
    }else
        throw invalid_argument("[ ERROR ] Invalid Argument.");
}

void VicobaAccount::setLoanDuration(const unsigned int arg){
    if(arg >= 0){
        loanDuration = arg;
    }else
        throw invalid_argument("[ ERROR ] Invalid Argument.");
}

// static funtion
void VicobaAccount::setInterestRate(const double arg){
    if(arg >= 0.0){
        interestRate = arg;
    }else
        throw invalid_argument("[ ERROR ] Invalid Argument.");
}

// get functions
double VicobaAccount::getAmountBorrowed() const{
    return amountBorrowed;
}
unsigned int VicobaAccount::getLoanDuration() const{
    return loanDuration;
}
double VicobaAccount::getInterestRate(){
    return interestRate;
}