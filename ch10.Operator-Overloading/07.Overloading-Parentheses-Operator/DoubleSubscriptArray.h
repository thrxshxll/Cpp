// DoubleSubscripArray class definition with overloaded operators.
// Member-function definitions are in DoubleSubscriptArray.cpp

/**
 * DoubleSubscriptArray class is able to create array n by m of any number of rows and columns,
 * at execution time. It can reference an element in matrix using parentheses insted
 * square bracket through use of overloaded operators. Also that it, the class has other overloaded
 * operators to turn it more natural to program.
 * 
 * it's necessary to object have at leat 1 line and 1 column; obj{1,1}
 * 
 * Yuri, May 2022
 * */

#ifndef DOUBLESUBSCRIPTARRAY_H
#define DOUBLESUBSCRIPTARRAY_H

#include <iostream>

class DoubleSubscriptArray{
    // iostream overloaded operators
    friend std::ostream& operator<<(std::ostream&, const DoubleSubscriptArray&);
    friend std::istream& operator>>(std::istream&, DoubleSubscriptArray&);

public:
    DoubleSubscriptArray(int =0, int =0);
    DoubleSubscriptArray(const DoubleSubscriptArray&);
    ~DoubleSubscriptArray();
    size_t getRow() const;
    size_t getColumn() const;

    // member-functions overloaded operator
    bool operator==(const DoubleSubscriptArray&);
    bool operator!=(const DoubleSubscriptArray&);
    const DoubleSubscriptArray& operator=(const DoubleSubscriptArray&);
    int& operator()(int, int);
    int operator()(int, int) const;

private:
    size_t size;
    size_t row;
    size_t column;
    int* ptr;
};

#endif