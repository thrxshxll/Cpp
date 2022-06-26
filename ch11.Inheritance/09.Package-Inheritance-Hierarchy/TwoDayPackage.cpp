#include <sstream>
#include "TwoDayPackage.h"
using namespace std;

// default constructor
TwoDayPackage::TwoDayPackage(const std::string& nameArg, const std::string& addressArg, const std::string& cityArg, const std::string& stateArg,
    const std::string& zipFromArg, const std::string& zipToArg, double weightArg, double costArg, double flatFeeArg)
:   Package{nameArg, addressArg, cityArg, stateArg, zipFromArg, zipToArg, weightArg, costArg},
    flatFee{flatFeeArg} { }


void TwoDayPackage::setFlatFee(double arg){
    flatFee = arg;
}
double TwoDayPackage::getFlatFee() const{
    return flatFee;
}


double TwoDayPackage::calculateCost() const{
    return getFlatFee() + Package::calculateCost();
}


std::string TwoDayPackage::toString() const{
    ostringstream output;
    output << "Name: " << getName()
        << "\nAddress: " << getAddress()
        << "\nCity: " << getCity()
        << "\nState: " << getState()
        << "\nZip From: " << getZipFrom()
        << "\nZip To: " << getZipTo()
        << "\nWeight: " << getWeight()
        << "\nCost Per Ounce: " << getCostPerOunce()
        << "\nTotal Cost: " << calculateCost();
    return output.str();
}