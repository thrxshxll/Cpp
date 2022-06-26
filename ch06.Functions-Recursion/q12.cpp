#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double hours);

int main(){
    double hours1,hours2,hours3;
    double chg1, chg2, chg3;
    double totalHours{0}, totalCharge{0};

    cout << setprecision(2) << fixed;

    cout << "Hour customer: ";
    cin >> hours1;
    chg1 = calculateCharges(hours1);
    totalHours+=hours1;
    totalCharge+=chg1;

    cout << "Hour customer: ";
    cin >> hours2;
    chg2 = calculateCharges(hours2);
    totalHours+=hours2;
    totalCharge+=chg2;

    cout << "Hour customer: ";
    cin >> hours3;
    chg3 = calculateCharges(hours3);
    totalHours+=hours3;
    totalCharge+=chg3;

    cout << setw(3) << "Car" << setw(17) << "Hours" << setw(18) << "Charge" << endl;

    cout << setw(3) << "1" << setw(17) << setprecision(1) << hours1 << setw(18) << setprecision(2) <<  chg1 << endl;
    cout << setw(3) << "2" << setw(17) << setprecision(1) << hours2 << setw(18) << setprecision(2) <<  chg2 << endl;
    cout << setw(3) << "3" << setw(17) << setprecision(1) << hours3 << setw(18) << setprecision(2) <<  chg3 << endl;

    cout << "TOTAL" << setw(15) << setprecision(1) << totalHours << setw(18) << setprecision(2) << totalCharge << endl;
}

double calculateCharges(double hours){
    double total{0};
    int aux{static_cast<int> (ceil(hours))};
    
    if(hours>=24){ total+=50; }else if(hours>3){ total+=20; for(int count
    {aux}; count>3; count--){ total+=5; } }else{ total=20; } return total; }