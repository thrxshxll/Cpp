#include "IntegerSet.h"
#include <iostream>
using namespace std;

int main(){
    IntegerSet set0{{8, 6, 4, 2}};
    IntegerSet set1{{1, 3, 5, 7}};
    IntegerSet set2{{1,3,5,7}};

    cout << "Set0: " << set0.toString() << endl;
    cout << "Set1: " << set1.toString() << endl;
    cout << "Set2: " << set2.toString() << endl;

    set0.unionOfSets(set1);
    cout << "Union of sets: " << set0.toString() << endl;

    set0.intersectionOfSets(set1);
    cout << "Intersection of Union with set1: " << set0.toString() << endl;

    cout << "\nIs set1 equal set2 ? " << boolalpha << set1.isEqual(set2) << endl;
}