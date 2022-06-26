/*

11.9 (Package Inheritance Hierarchy) Package-delivery services, such as FedEx®, DHL® and
UPS®, offer a number of different shipping options, each with specific costs associated. Create an
inheritance hierarchy to represent various types of packages. Use class Package as the base class of
the hierarchy, then include classes TwoDayPackage and OvernightPackage that derive from Package.
Base-class Package should include data members representing the name, address, city, state
and ZIP code for both the sender and the recipient of the package, in addition to data members
that store the weight (in ounces) and cost per ounce to ship the package. Package’s constructor
should initialize these data members. Ensure that the weight and cost per ounce contain positive
values. Package should provide a public member function calculateCost that returns a double
indicating the cost associated with shipping the package. Package’s calculateCost function should
determine the cost by multiplying the weight by the cost per ounce.
Derived-class TwoDayPackage should inherit the functionality of base-class Package, but also
include a data member that represents a flat fee that the shipping company charges for two-day-
delivery service. TwoDayPackage’s constructor should receive a value to initialize this data member.
TwoDayPackage should redefine member function calculateCost so that it computes the shipping
cost by adding the flat fee to the weight-based cost calculated by base-class Package’s calculate-
Cost function.
Class OvernightPackage should inherit directly from class Package and contain an additional
data member representing an additional fee per ounce charged for overnight-delivery service. Over-
nightPackage should redefine member function calculateCost so that it adds the additional fee
per ounce to the standard cost per ounce before calculating the shipping cost. Write a test program
that creates objects of each type of Package and tests member function calculateCost.

*/

// Yuri, Jun 2022


#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main(){
    TwoDayPackage package0{"Vans OldSchool", "SE 44 street, Lote 66", "Curitiba", "Parana",
    "BR90883PKG", "BR88309PGK", 900, 0.2, 6.0};

    OvernightPackage package1{"Oneplus 10", "SE 44 street, Lote 66", "Curitiba", "Parana",
    "BR6643PKG", "BR22310PGK", 300, 0.15, 4.2};


    cout << "Package0 information:\n" <<
    package0.toString() << endl;

    cout << "\n\nPackage1 information:\n" <<
    package1.toString() << endl;
}