#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
bool testPalindrome(const string& str, size_t begin, size_t end);

int main(){
    string name{"ablewasiereisawelba"};

    // cout << name.size() << endl;

    cout << boolalpha << testPalindrome(name, 0, name.size()-1) << endl;
}

bool testPalindrome(const string& str, size_t begin, size_t end){
    if(begin == str.size()/2){
        return true;
    }else{
        if(str[begin] == str[end]){
            testPalindrome(str, begin+1, end-1);
        }else{
            return false;
        }
    }
}