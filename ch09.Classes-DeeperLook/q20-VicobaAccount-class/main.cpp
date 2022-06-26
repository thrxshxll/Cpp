#include <iostream>
#include <iomanip>
#include "VicobaAccount.h"
using namespace std;

int main(){
    VicobaAccount person{1000, 2};

    VicobaAccount::setInterestRate(0.05);

    cout << "Amount lent: U$" << person.getAmountBorrowed()
    << "\nLoan Duration: " << person.getLoanDuration()
    << "\nAnual Interest rate: " << VicobaAccount::getInterestRate() << endl;

    cout << setprecision(2) << fixed;

    cout << "\nAmount to repay: U$" << person.moneyToRepay() << endl;

    try{
        person.setAmountBorrowed(-1400);
    }catch (invalid_argument& e){
        cout << "Exception: " << e.what() << endl;
    }

    cout << "New amount borrowed: " << person.getAmountBorrowed() << endl;
}