#include <iostream>
#include <cmath>
using namespace std;

double sphereVolume(double& xradius);

int main(){
    double radius;

    cout << "Enter sphere radius: ";
    cin >> radius;
    sphereVolume(radius);
}

inline double sphereVolume(double& xradius){
    double ans{4/3*3.14159 * pow(xradius, 3)};
    cout << "Sphere volume: " << ans << endl;
    return ans;
}