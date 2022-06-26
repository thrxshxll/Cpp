// Package class definition
// Package class member functions are defined in Package.cpp

#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package{
public:
    Package(const std::string& ="", const std::string& ="", const std::string& ="", const std::string& ="", const std::string& ="",
        const std::string& ="", double =0.0, double =0.0);

    void setName(const std::string&);
    std::string getName() const;

    void setAddress(const std::string&);
    std::string getAddress() const;

    void setCity(const std::string&);
    std::string getCity() const;

    void setState(const std::string&);
    std::string getState() const;

    void setZipFrom(const std::string&);
    std::string getZipFrom() const;

    void setZipTo(const std::string&);
    std::string getZipTo() const;

    void setWeight(double);
    double getWeight() const;

    void setCostPerOunce(double);
    double getCostPerOunce() const;

    double calculateCost() const;

private:
    std::string name;
    std::string address;
    std::string city;
    std::string state;
    std::string zipFrom;
    std::string zipTo;
    double weight;  // in ounces
    double costPerOunce;
};

#endif