#include "DoubleSubscriptArray.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

std::ostream& operator<<(std::ostream& output, const DoubleSubscriptArray& arg){
    for(size_t i{0}; i<arg.size; i++){
        output << setw(3) << arg.ptr[i];
        if((i+1)%arg.column==0){
            output << endl;
        }
    }return output;
}

std::istream& operator>>(std::istream& input, DoubleSubscriptArray& arg){
    for(size_t i{0}; i<arg.size; i++){
        input >> arg.ptr[i];
    }return input;
}

// default constructor
DoubleSubscriptArray::DoubleSubscriptArray(int r, int c)
    :   size{(r*c > 0) ? static_cast<size_t>(r*c) :
        throw invalid_argument{"row and column must be > 0"}},
        row{static_cast<size_t>(r)},
        column{static_cast<size_t>(c)},
        ptr{new int[size]{}} {/* empty body */}

// copy constructor
DoubleSubscriptArray::DoubleSubscriptArray(const DoubleSubscriptArray& toCopy)
    :   size{toCopy.size},
        row{toCopy.row},
        column{(toCopy.column)},
        ptr{new int[size]}{

    for(size_t i{0}; i<size; i++){
        ptr[i]=toCopy.ptr[i];
    }
}

// destructor
DoubleSubscriptArray::~DoubleSubscriptArray(){
    delete[] ptr;
}

size_t DoubleSubscriptArray::getRow() const{
    return this->row;
}

size_t DoubleSubscriptArray::getColumn() const{
    return this->column;
}

/**
 * Overloaded operators
 * */
// equality test opearator
bool DoubleSubscriptArray::operator==(const DoubleSubscriptArray& arg){
    if(size != arg.size) return false;

    for(size_t i{0}; i<size; i++){
        if(ptr[i] != arg.ptr[i]) return false;
    }return true;
}

// difference test operator
bool DoubleSubscriptArray::operator!=(const DoubleSubscriptArray& arg){
    return !(*this == arg);
}

// assigment operator 
const DoubleSubscriptArray& DoubleSubscriptArray::operator=(const DoubleSubscriptArray& arg){
    if(this != &arg){ // prevent self-assignment
        if(size != arg.size){
            // if both arrays have different sizes, deallocate current size and allocate
            // with arg's array size
            delete[] ptr;
            size=arg.size;
            ptr=new int[size];
        }

        for(size_t i{0}; i<size; i++){
            ptr[i]=arg.ptr[i];
        }

    }return *this;
}


int& DoubleSubscriptArray::operator()(int row, int column){
    if(row < this->row && column < this->column){
        return ptr[(row*this->column)+column];
    }throw out_of_range{"row and colum must be between[0...n-1]"};
}

int DoubleSubscriptArray::operator()(int row, int column) const{
    if(row < this->row && column < this->column){
        return ptr[(row*this->column)+column];
    }throw out_of_range{"row and colum must be between[0...n-1]"};
}