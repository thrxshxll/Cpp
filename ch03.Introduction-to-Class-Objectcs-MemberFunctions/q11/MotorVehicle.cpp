
#include "MotorVehicle.h"
#include <sstream>
using namespace std;

MotorVehicle::MotorVehicle(const std::string& make, const std::string& fuelType, int year){
    setMake(make);
    setFueltype(fuelType);
    setYearOfManufacture(year);
}

void MotorVehicle::setMake(const std::string& arg){
    make=arg;
}

void MotorVehicle::setFueltype(const std::string& arg){
    fuelType=arg;
}

void MotorVehicle::setYearOfManufacture(int arg){
    yearOfManufacture=arg;
}

void MotorVehicle::setColor(const std::string& arg){
    color=arg;
}

void MotorVehicle::setEngineCapacity(int arg){
    engineCapacity=arg;
}

std::string MotorVehicle::getMake() const{
    return make;
}

std::string MotorVehicle::getFueltype() const{
    return fuelType;
}

int MotorVehicle::getYearOfManufacture() const{
    return yearOfManufacture;
}

std::string MotorVehicle::getColor() const{
    return color;
}

int MotorVehicle::getEngineCapacity() const{
    return engineCapacity;
}

std::string MotorVehicle::displayCarDetails() const{
    ostringstream out;
    out << "make: " + make + "\nfueltype: " + fuelType + "\nyearOfManufacture: " << yearOfManufacture
    << "\ncolor: " + color + "\nengineCapacity: " << engineCapacity;
    return out.str();
}