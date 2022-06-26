#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

int main(){
    Person ob{"n0xcimento", 21};

    cout << ob.toString() << endl;
}