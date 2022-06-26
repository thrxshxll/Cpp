#include <iostream>
using namespace std;

int main(){
    double hour_worked;

    cout << "Hours worked: ( 0 to quit): ";
    cin >> hour_worked;

    while(hour_worked){
        double accrued{2 + (hour_worked/10)};

        cout << "Accrued leave: " << accrued << endl;

        cout << "\nHours worked: ( 0 to quit): ";
        cin >> hour_worked;
    }
}