// MotorVehicle class definition
// Member functions are defined in MotorVehicle.cpp
// Version: 01

#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H

#include <string>

class MotorVehicle{
public:
    MotorVehicle(const std::string& ="empty", const std::string& ="empty", int =0);

    void setMake(const std::string& arg);
    void setFueltype(const std::string& arg);
    void setYearOfManufacture(int arg);
    void setColor(const std::string& arg);
    void setEngineCapacity(int arg);
    std::string getMake() const;

    std::string getFueltype() const;
    int getYearOfManufacture() const;
    std::string getColor() const;
    int getEngineCapacity() const;

    std::string displayCarDetails() const;

private:
    std::string make;
    std::string fuelType;
    int yearOfManufacture;
    std::string color;
    int engineCapacity{0};
};

#endif