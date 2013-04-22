// Sums the numbers 1 to 50 and outputs the result.

#include <iostream>
using namespace std;

int main() {
    int total = 0;

    for (int i = 1; i <= 50; ++i) {
        total += i;
    }

    cout << "The sum of the numbers from 1 to 50 is " << total << "." << endl;

    return 0;
}