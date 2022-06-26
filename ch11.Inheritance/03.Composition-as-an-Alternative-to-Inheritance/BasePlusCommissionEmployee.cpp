#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <sstream>
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string& first, const std::string& last,
    const std::string& ssn, double sales, double rate, double base)
:   commission{first, last, ssn, sales, rate},
    baseSalary{base} { }


void BasePlusCommissionEmployee::setBaseSalary(double arg){
    baseSalary = arg;
}
double BasePlusCommissionEmployee::getBaseSalary() const{
    return baseSalary;
}


double BasePlusCommissionEmployee::earnings() const{
    return getBaseSalary() + (commission.getCommissionRate() * commission.getGrossSales());
}


std::string BasePlusCommissionEmployee::toString() const{
    ostringstream output;
    output << commission.toString()
        << "\nBase Salary: " << getBaseSalary();

    return output.str();
}


// member functions to give access to commissionEmployee data members through BasePlusCommissionEmployee class
void BasePlusCommissionEmployee::setFirstName(const std::string& arg){
    commission.setFirstName(arg);
}
std::string BasePlusCommissionEmployee::getFirstName() const{
    return commission.getFirstName();
}


void BasePlusCommissionEmployee::setLastName(const std::string& arg){
    commission.setLastName(arg);
}
std::string BasePlusCommissionEmployee::getLastName() const{
    return commission.getLastName();
}


void BasePlusCommissionEmployee::setSocialSecurityNumber(const std::string& arg){
    commission.setSocialSecurityNumber(arg);
}
std::string BasePlusCommissionEmployee::getSocialSecurityNumber() const{
    return commission.getSocialSecurityNumber();
}


void BasePlusCommissionEmployee::setGrossSales(double arg){
    commission.setGrossSales(arg);
}
double BasePlusCommissionEmployee::getGrossSales() const{
    return commission.getGrossSales();
}


void BasePlusCommissionEmployee::setCommissionRate(double arg){
    commission.setCommissionRate(arg);
}
double BasePlusCommissionEmployee::getCommissionRate() const{
    return commission.getCommissionRate();
}