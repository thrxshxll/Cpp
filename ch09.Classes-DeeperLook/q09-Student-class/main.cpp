/*

9.9 (Improving Class Student) Improve the Student class in the previous exercise by using the
concept of composition. Replace the three data members used to represent names with a data mem-
ber of the Name class you created in Exercise 9.7. In addition, replace the data member used to rep-
resent the year of birth of a student with a full date of birth by making use of class Date of Figs. 9.14-
9.15. Note that using a Name data member calls for a default constructor in class Name.

*/

// Yuri, Jun 2022


#include <iostream>
#include "Student.h"
using namespace std;

int main(){
    Name aux{"Yuri", "de Sousa", "Nascimento"};
    Student aluno1;
    Student aluno2{aux, "M", "13/12/2000", "66617666", "yuri@n0xc.com"};

    cout << aluno2.getName() << endl;
}