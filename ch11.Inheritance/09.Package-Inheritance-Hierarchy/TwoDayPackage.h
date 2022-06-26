// TwoDayPackage class definition.
// Member functions are defined in TwoDayPackage.cpp

#ifndef TWODAY_H
#define TWODAY_H

#include <string>
#include "Package.h"


class TwoDayPackage : public Package {
public:
    // default constructor
    TwoDayPackage(const std::string& ="", const std::string& ="", const std::string& ="", const std::string& ="",
        const std::string& ="", const std::string& ="", double =0.0, double =0.0, double =0.0);

    void setFlatFee(double);
    double getFlatFee() const;

    double calculateCost() const;
    std::string toString() const;

private:
    double flatFee;
};

#endif