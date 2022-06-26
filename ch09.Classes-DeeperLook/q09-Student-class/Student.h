// Student class definition

/**
 * In this class, it was use composition concept to be reused the class
 * Name, created one other exercise. The classe Student can be used to track
 * student's academic records at school.
 * */

#include <string>
#include "Name.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student{
public:
    Student(); // default constructor
    Student(const Name&, const std::string&, const std::string&, const std::string&, const std::string&);

    void setSex(const std::string& arg);
    void setyearOfBirth(const std::string& arg);
    void setRegistrationNumber(const std::string& arg);
    void setEmail(const std::string& arg);

    std::string getName() const;
    std::string getSex() const;
    std::string getYearOfBirth() const;
    std::string getRegistrationNumber() const;
    std::string getEmail() const;

private:
    Name name;
    std::string sex;
    std::string yearOfBirth;
    std::string registrationNumber;
    std::string email;
};

#endif