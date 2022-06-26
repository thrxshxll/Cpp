#include <iostream>
#include "HugeInteger.h"
using namespace std;

int main(){
    HugeInteger num1{"123456789123456789123456789123456789486"};
    HugeInteger num2{"123456789123456789123456789123456789"};

    num1.add(num2);
    cout << num1.output() << endl;

    num1.subtract(num2);
    cout << num1.output() << endl;

    cout << "num1 < num2 ? " << boolalpha << num1.isEqualTo(num2) << endl;
    cout << "num1 > num2 ? " << boolalpha << num1.isGreaterThan(num2) << endl;

}