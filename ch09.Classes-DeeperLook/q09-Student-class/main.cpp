#include <iostream>
#include "Student.h"
using namespace std;

int main(){
    Name aux{"Yuri", "de Sousa", "Nascimento"};
    Student aluno1;
    Student aluno2{aux, "M", "13/12/2000", "66617666", "yuri@n0xc.com"};

    cout << aluno2.getName() << endl;
}