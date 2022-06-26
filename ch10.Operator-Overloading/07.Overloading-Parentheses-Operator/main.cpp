

/*

10.7 (Overloading the Parentheses Operator) One nice example of overloading the function call
operator () is to allow another form of double-array subscripting popular in some programming
languages. Instead of saying

chessBoard[row][column]

for an array of objects, overload the function call operator to allow the alternate form

chessBoard(row, column)

Create a class DoubleSubscriptedArray that has similar features to class Array in Figs. 10.10–
10.11. At construction time, the class should be able to create a DoubleSubscriptedArray of any
number of rows and columns. The class should supply operator() to perform double-subscripting
operations. For example, in a 3-by-5 DoubleSubscriptedArray called chessBoard , the user could
write chessBoard(1, 3) to access the element at row 1 and column 3 . Remember that operator()
can receive any number of arguments. The underlying representation of the DoubleSubscriptedArray
could be a single-subscripted array of integers with rows * columns number of elements. Function
operator() should perform the proper pointer arithmetic to access each element of the underlying
array. There should be two versions of operator() —one that returns int& (so that an element of a
DoubleSubscriptedArray can be used as an lvalue) and one that returns int . The class should also
provide the following operators: == , != , = , << (for outputting the DoubleSubscriptedArray in row and
column format) and >> (for inputting the entire DoubleSubscriptedArray contents).

*/

// Yuri, jun 2022

// program execution test the DoubleSubscriptArray class

#include <iostream>
#include "DoubleSubscriptArray.h"
using namespace std;

int main(){
    DoubleSubscriptArray mtx0{2,2};
    DoubleSubscriptArray mtx2{1,1};

    cout << "For mtx0, Enter [" << mtx0.getRow() << "][" << mtx0.getColumn() << "] matrix" << endl;
    cin >> mtx0;
    cout << "\nPrinting matrix\n" << mtx0;

    cout << "\nAccessing mtx0's element by () operator:\nmtx0(1,0) = " << mtx0(1,0) << endl;


    // declaring mtx1 and assigning mtx0 in that
    DoubleSubscriptArray mtx1{mtx0}; // copy constructor overloaded operator

    cout << "\n\nPrinting mtx1 and accessing mtx1's element by () operator:\n"
        << mtx1 << "\nmtx1(1,1) = " << mtx1(1,1) << endl;

    cout << "\nPrinting mtx2\n" << mtx2;

    cout << "\nVerifying if matrixes are equal, using equality overloaded operator:\nmtx0 == mtx1 ? " << (mtx0==mtx1 ? "Equal" : "Different") << endl;
    cout << "mtx0 == mtx2 ? " << (mtx0==mtx2 ? "Equal" : "Different") << endl;

}