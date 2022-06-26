#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : Person{"", 0} {};

Person::Person(const std::string& name, int age){
    this->name=name;
    this->age=age;
}

std::string Person::toString() const{
    return name + " " + to_string(age);
}