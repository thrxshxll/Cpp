#include <iostream>
using namespace std;

int main(){
    
}

a)
    const size_t arraySize{8};

b)
    array<double, arraySize> arrayDouble;

    for(double& item : arrayDouble){
        item = 1.0;
    }

c)
    arrayD[2];

e)
    arrayd[6]=1.667;

f)
    array[5]=3.333;

g)
    cout << array[5.3/10] << endl;
    cout << array[7.3/10] << endl;

h)
    for(size_t j{0}; j<array.size(); j++){
        cout << array[j] << " ";
    }cout << endl;

i)
    for(auto item : array){
        cout << item "-";
    }cout << endl;