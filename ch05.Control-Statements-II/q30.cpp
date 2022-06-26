#include <iostream>
#include <iomanip>
#include <string>
#include "classDollarAmount30.h"


using namespace std;

int main(){

    DollarAmount balance{1000,00};
    cout << "Balance: " << balance.toString() << endl;

    cout << "rate and divisor : ";

    int rate, divisor;
    cin >> rate >> divisor;


    cout << "Interest rate: " << to_string(rate / (divisor/100)) << "."
    << to_string(rate % (divisor/100)) << "%" << endl;

    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

    for(unsigned int year{1}; year<=10; year++){

        balance.addInterest(rate, divisor);

        cout << setw(4) << year << setw(20) << balance.toString() << endl;
    }

}