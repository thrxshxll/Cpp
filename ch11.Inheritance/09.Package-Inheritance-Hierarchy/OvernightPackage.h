// OvernightPackage class definition.
// Member functions are defined in OvernightPackage.cpp

#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h"

class OvernightPackage : public Package {
public:
    // default constructor
    OvernightPackage(const std::string& ="", const std::string& ="", const std::string& ="", const std::string& ="", const std::string& ="",
        const std::string& ="", double =0.0, double =0.0, double =0.0);


    void setFeePerOunce(double arg);
    double getFeePerOunce() const;


    double calculateCost() const;
    std::string toString() const;

private:
    double feePerOunce;
};

#endif