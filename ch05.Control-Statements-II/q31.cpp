#include <iostream>
// #include "q30class.h"
#include "q31class.h"

using namespace std;

int main(){

    int number, div;

    cout << "Enter a number and a divider: ";
    cin >> number >> div;

    DollarAmount n{number,00};


    cout << "number: " << n.toString();
    n.divide(div);
    cout << "\nans: " <<  n.toString() << endl;


}