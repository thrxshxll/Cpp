#include <iostream>
#include <iomanip>
#include "classAccount.h"
// #include "classDollarAmount33.h"

using namespace std;

int main(){

    Account myaccount{"Yuri n0xc", {4500, 68}};

    cout << "\nAccount Name: " << myaccount.getName()

    << "\nAccount Balance: " << myaccount.getBalance() << endl;

    int deposit, withdraw;

    cout << "Money to deposti (penny): ";
    cin >> deposit;
    myaccount.deposit({deposit/100, deposit%100});

    cout << "\nAccount Name: " << myaccount.getName()

    << "\nAccount Balance: " << myaccount.getBalance() << endl;    

    cout << "Money to withdraw (penny): ";
    cin >> withdraw;
    myaccount.withdraw({withdraw/100, withdraw%100});


    cout << "\nAccount Name: " << myaccount.getName()

    << "\nAccount Balance: " << myaccount.getBalance() << endl;
}