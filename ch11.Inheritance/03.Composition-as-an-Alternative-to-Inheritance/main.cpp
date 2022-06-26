/*

11.3 (Composition as an Alternative to Inheritance) Many programs written with inheritance
can be written with composition instead, and vice versa. Rewrite class BasePlusCommissionEmployee
of the CommissionEmployee–BasePlusCommissionEmployee hierarchy to use composition rather
than inheritance. After you do this, assess the relative merits of the two approaches for designing
classes CommissionEmployee and BasePlusCommissionEmployee, as well as for object-oriented pro-
grams in general. Which approach is more natural? Why?

*/

// Yuri, jun 2022


#include "BasePlusCommissionEmployee.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    BasePlusCommissionEmployee employee{"Yuri", "Nascimento", "777-11-333", 6000, 0.4, 400};

    cout << fixed << setprecision(2);
    cout << "Employee information:\n"
        << "\nFirst name: " << employee.getFirstName()
        << "\nLast name :" << employee.getLastName()
        << "\nSocial security number: " << employee.getSocialSecurityNumber()
        << "\nGross sales: " << employee.getGrossSales()
        << "\nCommission rate: " << employee.getCommissionRate()
        << "\nBase salary: " << employee.getBaseSalary() << endl;

        employee.setBaseSalary(7000);
        cout << "\nUpdated employee information from function toString():\n\n" << employee.toString() << endl;
}