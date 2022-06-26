/**
 * IntegerSet class that can hold integer from 1 to 99. Represent set internally as a
 * vector of bool valeus, indexing each integer as true in bool vector.
 * Provide Union and Intersection operations of sets.
 * */

// IntegerSet class definition.
// Member functions are defined in IntegerSet.cpp
#include <array>
#include <vector>
#include <string>

#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet{;
public:
    // constructor
    explicit IntegerSet(const std::array<int,100>& setArray={});

    void insertElement(int);
    void deleteElement(int);

    std::string toString() const;

    bool isEqual(const IntegerSet&) const;

    void unionOfSets(const IntegerSet&);
    void intersectionOfSets(const IntegerSet&);

private:
    std::vector<bool> set;
};

#endif