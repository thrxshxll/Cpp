// OvernightPackage class member functions definitions.

#include <sstream>
#include "OvernightPackage.h"
using namespace std;

// default constructor
OvernightPackage::OvernightPackage(const std::string& nameArg, const std::string& addressArg, const std::string& cityArg, const std::string& stateArg,
    const std::string& zipFromArg, const std::string& zipToArg, double weightArg, double costArg, double feePerOunceArg)
:   Package{nameArg, addressArg, cityArg, stateArg, zipFromArg, zipToArg, weightArg, costArg},
    feePerOunce{feePerOunceArg} { }


void OvernightPackage::setFeePerOunce(double arg){
    feePerOunce = arg;
}
double OvernightPackage::getFeePerOunce() const{
    return feePerOunce;
}


double OvernightPackage::calculateCost() const{
    return getFeePerOunce() + Package::calculateCost(); 
}


std::string OvernightPackage::toString() const{
    ostringstream output;
    output << "Name: " << getName()
        << "\nAddress: " << getAddress()
        << "\nCity: " << getCity()
        << "\nState: " << getState()
        << "\nZip From: " << getZipFrom()
        << "\nZip To: " << getZipTo()
        << "\nWeight: " << getWeight()
        << "\nFee Per Ounce: " << getFeePerOunce()
        << "\nTotal Cost: " << calculateCost();
    return output.str();
}