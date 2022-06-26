#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() : Student{{}, "", "", "", ""} {};
Student::Student(const Name& name, const std::string& sex, const std::string& year, const std::string& registration, const std::string& email)
:   name{name},
    sex{sex},
    yearOfBirth{year},
    registrationNumber{registration},
    email{email}
{}

void Student::setSex(const std::string& arg){

    if(arg=="M" || arg =="m" || arg =="F" || arg =="f"){
        sex=arg;
    }else{
        cout << "Sex isn't valid!" << endl;
    }
}
void Student::setyearOfBirth(const std::string& arg){
    yearOfBirth=arg;
}

void Student::setRegistrationNumber(const std::string& arg){
    registrationNumber=arg;
}

void Student::setEmail(const std::string& arg){
    email=arg;
}

std::string Student::getName() const{
    return name.toString();
}

std::string Student::getSex() const{
    return sex;
}

std::string Student::getYearOfBirth() const{
    return yearOfBirth;
}

std::string Student::getRegistrationNumber() const{
    return registrationNumber;
}

std::string Student::getEmail() const{
    return email;
}
