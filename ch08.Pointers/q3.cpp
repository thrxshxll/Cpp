#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const size_t size{10};
    double numbers[size]{0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    double *nPtr{numbers};

    // nPtr=numbers;
    /*for(size_t offset{0}; offset < size; offset++){
        // cout << numbers[offset] << " "; 
        // cout << *(nPtr + offset) << " "; 
        // cout << *(numbers + offset) << " "; 
        cout << nPtr[offset] << " "; 
    }cout << endl;*/

    nPtr=&numbers[5];
    nPtr -= 4;

    cout << *nPtr << endl;
}