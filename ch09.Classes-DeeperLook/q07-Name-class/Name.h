// Name class definition
// Member-function are defined in Name.cpp

#include <string>

#ifndef Name_H
#define Name_H

class Name{
public:
    Name(); // default constructor
    
    // overload constructors
    explicit Name(const std::string&);
    Name(const std::string&,const std::string&);
    Name(const std::string&,const std::string&,const std::string&);
    Name(const std::string&, const std::string&, const std::string&, const std::string&);

    std::string toString() const;

    void setFirstName(const std::string&);
    void setMiddleName(const std::string&);
    void setLastName(const std::string&);
    void setSalutation(const std::string&);

    std::string getFirstName() const;
    std::string getMiddleName() const;
    std::string getLastName() const;
    std::string getSalutation() const;

private:
    std::string firstName;
    std::string middleName;
    std::string lastName;
    std::string salutation;
};

#endif