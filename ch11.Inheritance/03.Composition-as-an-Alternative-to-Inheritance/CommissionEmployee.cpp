#include "CommissionEmployee.h"
#include <sstream>
using namespace std;


CommissionEmployee::CommissionEmployee(const std::string& first, const std::string& last,
    const std::string& ssn, double sales, double rate)
:   firstName{first},
    lastName{last},
    socialSecurityNumber{ssn},
    grossSales{sales},
    commissionRate{rate} { }


void CommissionEmployee::setFirstName(const std::string& arg){
    firstName = arg;
}
std::string CommissionEmployee::getFirstName() const{
    return firstName;
}


void CommissionEmployee::setLastName(const std::string& arg){
    lastName = arg;
}
std::string CommissionEmployee::getLastName() const{
    return lastName;
}


void CommissionEmployee::setSocialSecurityNumber(const std::string& arg){
    socialSecurityNumber = arg;
}
std::string CommissionEmployee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}


void CommissionEmployee::setGrossSales(double arg){
    grossSales = arg;
}
double CommissionEmployee::getGrossSales() const{
    return grossSales;
}


void CommissionEmployee::setCommissionRate(double arg){
    commissionRate = arg;
}
double CommissionEmployee::getCommissionRate() const{
    return commissionRate;
}


double CommissionEmployee::earnings() const{
    return getCommissionRate() * getGrossSales();
}


std::string CommissionEmployee::toString() const{
    ostringstream output;
    output << "CommissionEmployee: " << getFirstName() << " " << getLastName()
        << "\nSocial Security Number: " << getSocialSecurityNumber()
        << "\nGross Sales: " << getGrossSales()
        << "\nCommission Rate: " << getCommissionRate();

    return output.str();
}