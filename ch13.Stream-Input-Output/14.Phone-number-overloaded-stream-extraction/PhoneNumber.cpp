#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

std::istream& operator>>(std::istream& input, PhoneNumber& number){
    /**
     * Input a strins by istream (cin >>) and put it in number object.
     * Format: (800) 124-4444
     * */

    std::string temp;
    input >> temp;

    if(temp.size() < 14){
        throw invalid_argument("Must be at least 14 chars!");
    }

    input.ignore(); // skip (
    input >> setw(3) >> number.areaCode;
    input.ignore(2); // skip ) and space
    input >> setw(3) >> number.exchange;
    input.ignore(); // skip -
    input >> setw(4) >> number.line;

    return input;
}


std::ostream& operator<<(std::ostream& output, const PhoneNumber& number){
    /**
     * Output a string number by ostream (cout <<)
     * */

    output << "Area Code: " << number.areaCode
        << "\nExchange: " << number.exchange
        << "\nLine: " << number.line
        << "\n(" << number.areaCode << ") " << number.exchange << "-"
        << number.line;
        return output;
}