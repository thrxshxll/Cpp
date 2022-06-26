/**
 * HugeInteger class to strore integers as large as 40 digits each.
 * Basic mathematic operations are possible. Addition and subtration, only.
 * Some predicate functions are available.
 * */

// HugeInteger class definition.
// Member functions are defined in HugeInteger.cpp
#include <array>
#include <string>

#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

class HugeInteger{
public:
    // constructor
    explicit HugeInteger(const std::string& ="");

    // member functions
    void input(const std::string&);
    std::string output() const;

    // basic mathematic operations
    void add(const HugeInteger&);
    void subtract(const HugeInteger&);

    // predicate functions
    bool isEqualTo(const HugeInteger&) const;
    bool isNotEqualTo(const HugeInteger&) const;
    bool isGreaterThan(const HugeInteger&) const;
    bool isLessThan(const HugeInteger&) const;
    bool isGreaterThanOrEqualTo(const HugeInteger&) const;
    bool isLessThanOrEqualTo(const HugeInteger&) const;

private:
    static const size_t Dig{40}; // number size
    std::array<int, Dig> integer{};


    // utility functions
    void stringToArray(const std::string&); // convert number string to number in array of size 40
    size_t initInt() const; // return exact index where integer start in array
    size_t biggestNum(const HugeInteger&);  // return initial index of the biggest number
};
#endif