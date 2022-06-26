// Name Member-function definitions
#include <string>
#include <sstream>
#include "Name.h"
using namespace std;

Name::Name() : Name{"", "", "", ""} {}
Name::Name(const string& first) : Name{first, ""} {}
Name::Name(const string& first, const string& middle) : Name{first, middle, ""} {}
Name::Name(const string& first, const string& middle, const string& last) : Name{first, middle, last, ""} {}

Name::Name(const string& first, const string& middle, const string& last, const string& salut){
    setFirstName(first);
    setMiddleName(middle);
    setLastName(last);
    setSalutation(salut);
}

string Name::toString() const{
    if(firstName != ""){
        return salutation + " " + lastName + ", " + firstName + " " + middleName;
    }return ""; // Empty Name        
}

void Name::setFirstName(const std::string& arg){
    firstName = arg;
}
void Name::setMiddleName(const std::string& arg){
    middleName = arg;
}
void Name::setLastName(const std::string& arg){
    lastName = arg;
}
void Name::setSalutation(const std::string& arg){
    salutation = arg;
}

string Name::getFirstName() const{
    return firstName;

}
string Name::getMiddleName() const{
    return middleName;

}
string Name::getLastName() const{
    return lastName;

}
string Name::getSalutation() const{
    return salutation;

}