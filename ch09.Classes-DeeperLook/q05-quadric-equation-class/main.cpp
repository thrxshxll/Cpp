#include <iostream>
#include "Quadratic.h"
using namespace std;

int main(){
    Quadratic o1, o2{1,5,3}, o3{2,8,10};

    cout << o1.toString() << endl;
    cout << o2.toString() << endl;
    cout << o3.toString() << endl;

    o3.add(o2);
    cout << o3.toString() << endl;
    o3.subtract(o2);
    cout << o3.toString() << endl;

    o2.solve();    
}