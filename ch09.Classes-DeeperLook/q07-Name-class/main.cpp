#include <iostream>
#include "Name.h"
using namespace std;

int main(){
    Name person1{"yuri", "de Sousa", "nascimento", "Dr."};
    Name person2;

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;

    person2=person1;
    person2.setFirstName("n0xc");

    cout << person2.toString() << endl;
}