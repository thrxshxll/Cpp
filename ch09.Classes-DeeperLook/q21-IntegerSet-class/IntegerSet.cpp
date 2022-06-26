#include "IntegerSet.h"
#include <stdexcept>
#include <sstream>
#include <iomanip>
using namespace std;

// constructor
IntegerSet::IntegerSet(const std::array<int,100>& setArray){
    // initialize set to all false(zero), empty set
    for(size_t indx{0}; indx <100; ++indx){
        this->set.push_back(0);
    }
    // puts integers that were passed by array to constructor
    for(size_t indx{0}; setArray.at(indx)!=0 && indx < setArray.size(); ++indx){
        this->insertElement(setArray.at(indx));
    }
}

void IntegerSet::insertElement(int arg){
    if(0 < arg && arg <100){
        this->set.at(arg) = true;
    }else
        throw invalid_argument("[ ERROR ] Invalid Argument!");
}

void IntegerSet::deleteElement(int arg){
    if(0 < arg && arg <100){
        this->set.at(arg) = false;
    }else
        throw invalid_argument("[ ERROR ] Invalid Argument!");
}

string IntegerSet::toString() const{
    ostringstream out;
    for(size_t indx{1}; indx < 100; ++indx){
        if(this->set.at(indx) == true){
            out << setw(3) << indx;
        }
    }
    if(!out.str().empty()){ // set is not empty
        return out.str();
    }return "---";
}

bool IntegerSet::isEqual(const IntegerSet& arg) const{
    for(size_t indx{0}; indx < this->set.size(); ++indx){
        if(this->set.at(indx) != arg.set.at(indx)){return false;} // are not equal sets
    }return true;
}

void IntegerSet::unionOfSets(const IntegerSet& arg){
    for(size_t indx{1}; indx < 100; ++indx){
        if(arg.set.at(indx) == true){
            this->insertElement(indx);
        }
    }
}
void IntegerSet::intersectionOfSets(const IntegerSet& arg){
    for(size_t indx{1}; indx < 100; ++indx){
        if(this->set.at(indx) == true && arg.set.at(indx) == true){
            this->insertElement(indx);
        }else
            this->deleteElement(indx);
    }
}