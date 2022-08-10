// PhoneNumber class definition
// Member functions definition are in PhoneNumber.cpp

#ifndef PHONENUMBER
#define PHONENUMBER

#include <string>

class PhoneNumber{
    friend std::istream& operator>>(std::istream&, PhoneNumber&);
    friend std::ostream& operator<<(std::ostream&, const PhoneNumber&);

private:
    std::string areaCode;
    std::string exchange;
    std::string line;
};

#endif