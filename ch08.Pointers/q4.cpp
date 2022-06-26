#include <iostream>
using namespace std;

int main(){
    double number1{7.3}, number2;
    double *iPtr{nullptr};

    iPtr=&number2;
    cout << *iPtr << endl;
}