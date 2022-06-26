#include <iostream>
#include <iomanip>
#include "classDollarAmount33.h"

using namespace std;

int main(){

    DollarAmount n1{34,76}, n2{54,32};

    cout << n1.toString() << " + " << n2.toString() << " = ";
    n1.add(n2);
    cout << n1.toString() << endl;


    cout << n1.toString() << " - " << n2.toString() << " = ";
    n1.subtract(n2);
    cout << n1.toString() << endl;


    cout << n1.toString() <<"/4 = ";
    n1.divide(4);
    cout  << n1.toString() << endl;


    DollarAmount balance{1000,00};

    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

    for(unsigned int year{1}; year <= 10; year++){

        balance.addInterest(525, 10000);

        cout << setw(4) << year << setw(20) << balance.toString() << endl;
    }
}