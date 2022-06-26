// Quadratic member-function definitions
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>
#include "Quadratic.h"
using namespace std;

// output stream operator
ostream& operator<<(ostream& output, const Quadratic& arg){
    cout << setprecision(2) << fixed;
    output << arg.a << arg.var << "² + " << arg.b << arg.var << " + " << arg.c;
    return output;
}


Quadratic::Quadratic(double a, double b, double c){
    seta(a);
    setb(b);
    setc(c);
}

void Quadratic::seta(double a){
    if(a<=0){
        this->a=1;
    }this->a=a;
}

void Quadratic::setb(double b){
    this->b=b;
}

void Quadratic::setc(double c){
    this->c=c;
}

void Quadratic::add(const Quadratic& arg){
    this->a+=arg.a;
    this->b+=arg.b;
    this->c+=arg.c;
}

void Quadratic::subtract(const Quadratic& arg){
    this->a-=arg.a;
    this->b-=arg.b;
    this->c-=arg.c;
}

string Quadratic::toString() const {
    ostringstream output;
    output << setprecision(2) << fixed;
    output << this->a << var << "² + " << this->b << var << " + " << this->c;
    return output.str();
}

void Quadratic::solve(){
    double delt{pow(b,2) - 4*a*c};
    if(delt<=0){
        cout << "No Real Roots." << endl;
    }else{
        double x1{0}, x2{0};
        x1=(-b + sqrt(delt))/2*a;
        x2=(-b - sqrt(delt))/2*a;

        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
    }
}

Quadratic Quadratic::operator+(const Quadratic& arg) const{
    Quadratic temp{*this};
    temp.a+=arg.a;
    temp.b+=arg.b;
    temp.c+=arg.c;
    return temp;
}

Quadratic Quadratic::operator-(const Quadratic& arg) const{
    Quadratic temp{*this};
    temp.a-=arg.a;
    temp.b-=arg.b;
    temp.c-=arg.c;
    return temp;
}
