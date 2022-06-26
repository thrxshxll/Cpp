// BasePlusCommisionEmployee class definition
// Member functions defintions are defined in BasePlusCommissionEmployee.cpp

#ifndef BASEPLUSCOMMISSION_H
#define BASEPLUSCOMMISSION_H

#include <string>
#include "CommissionEmployee.h" // composition

class BasePlusCommissionEmployee{
public:
    BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&,
        double =0.0, double =0.0, double =0.0);

    void setBaseSalary(double);
    double getBaseSalary() const;

    double earnings() const;
    std::string toString() const;

    
    // member functions to give access to commissionEmployee data members through BasePlusCommissionEmployee class
    void setFirstName(const std::string&);
    std::string getFirstName() const;

    void setLastName(const std::string&);
    std::string getLastName() const;

    void setSocialSecurityNumber(const std::string&);
    std::string getSocialSecurityNumber() const;

    void setGrossSales(double);
    double getGrossSales() const;

    void setCommissionRate(double);
    double getCommissionRate() const;

private:
    CommissionEmployee commission;  // composition  
    double baseSalary;
};

#endif