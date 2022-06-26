#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n{333.546372};


    for(unsigned int count{1}; count<=3 ; count++){

        cout << left << setprecision(count) << fixed;

        cout << setw(15) << setw(15) << n;
    }cout << endl;

}