// Reads in a measurement in meters and returns the imperial equivalent in feet and inches.

#include <iostream>
using namespace std;

int main() {
    const float  metersPerInch= 0.0254;
    const int inchesPerFoot = 12;

    float inches, feet, leftover, meters;

    while (cin >> meters) {
        inches   = meters / metersPerInch;
        feet     = inches / inchesPerFoot;
        leftover = (feet - int(inches/inchesPerFoot))*inchesPerFoot;
        
        cout << int(feet) << " feet" << " and " << leftover << " inches." << endl;
    }

    return 0;
}