#include "Students.h"
#include "Person.h"

unsigned int Students::counter{0};

void Students::setName(const std::string& name){
    this->name=name;
}

std::string Students::getName() const{
 return name;
}