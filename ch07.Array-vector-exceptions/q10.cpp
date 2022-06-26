#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const size_t arraySize{11};
double serverSalary(const double basicRate, double hours, double tips);
void outputBarChart(const array<int, arraySize>& frequency);

int main(){

    array<int, arraySize> frequency{};

    cout << "Enter Basic Rate: ";
    double basicRate;
    cin >> basicRate;

    cout << "Enter HOURS wages and TIPS: ";
    double hours, tips;
    cin >> hours;
    while(hours != 0){
        cin >> tips;

        ++frequency[serverSalary(basicRate, hours, tips)/10];

        cout << "Enter HOURS wages and TIPS: ";
        cin >> hours;
    }

    outputBarChart(frequency);
}



double serverSalary(const double basicRate, double hours, double tips){
    return (basicRate * hours) + tips;
}

void outputBarChart(const array<int, arraySize>& frequency){
    for(size_t indx{2}; indx < frequency.size(); indx++){

        if(indx == 10){
            cout << indx*10 << " and over: ";
        }else{
            cout << indx*10 << "-" << indx*10 + 9 << ": ";            
        }

        for(int star{0}; star < frequency[indx]; star++){
            cout << "*";
        }cout << endl;
    }
}