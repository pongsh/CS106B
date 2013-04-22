// Reads a temperature in celcius and prints out the fahrenheit equivalent.

#include <iostream>
using namespace std;

int main() {
	double celcius;

	while (cin >> celcius) {
		cout << celcius << " degrees celcius is " << 9.0/5.0*celcius+32 << " degrees fahrenheit." << endl;
	}
    
	return 0;
}