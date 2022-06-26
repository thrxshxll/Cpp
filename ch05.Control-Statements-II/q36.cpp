#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n;

    n = 123.02;

    for(unsigned int i{1}; i <= 20; i++){

        cout << setprecision(i) << fixed;

        cout << n << endl;
    }

}