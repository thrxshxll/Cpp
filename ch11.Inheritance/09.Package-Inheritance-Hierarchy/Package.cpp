#include <stdexcept>
#include "Package.h"

Package::Package(const std::string& nameArg, const std::string& addressArg, const std::string& cityArg, const std::string& stateArg,
    const std::string& zipFromArg, const std::string& zipToArg, double weightArg, double costArg)
:   name{nameArg},
    address{addressArg},
    city{cityArg},
    state{stateArg},
    zipFrom{zipFromArg},
    zipTo{zipToArg} {
        setWeight(weightArg);
        setCostPerOunce(costArg);
    }


void Package::setName(const std::string& arg){
    name = arg;
}
std::string Package::getName() const{
    return name; 
}


void Package::setAddress(const std::string& arg){
    address = arg;
}
std::string Package::getAddress() const{
    return address; 
}


void Package::setCity(const std::string& arg){
    city = arg;
}
std::string Package::getCity() const{
    return city; 
}


void Package::setState(const std::string& arg){
    state = arg;
}
std::string Package::getState() const{
    return state; 
}


void Package::setZipFrom(const std::string& arg){
    zipFrom = arg;
}
std::string Package::getZipFrom() const{
    return zipFrom; 
}


void Package::setZipTo(const std::string& arg){
    zipTo = arg;
}
std::string Package::getZipTo() const{
    return zipTo; 
}


void Package::setWeight(double arg){
    if(arg < 0){
        throw std::invalid_argument{"Weight must be positive!"};
    }
    weight = arg;
}
double Package::getWeight() const{
    return weight; 
}


void Package::setCostPerOunce(double arg){
    if(arg < 0){
        throw std::invalid_argument{"Cost per ounce must be positive!"};
    }
    costPerOunce = arg;
}
double Package::getCostPerOunce() const{
    return costPerOunce; 
}


double Package::calculateCost() const{
    return getWeight() * getCostPerOunce();
}