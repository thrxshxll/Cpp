#include "Person.h"

#ifndef STUDENT_H
#define STUDENT_H

class Students{
public:
    void setName(const std::string&);
    std::string getName() const;

private:
    static unsigned int counter;

    std::array<Person, Students::counter> list;
    std::string name;

};

#endif