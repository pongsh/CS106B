// Asks users for a list of integers and outputs the largest value.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int sentinel = 0;
    int n, largest = INT_MIN;
    
    cout << "This program finds the largest integer in a list." << endl;
    cout << "Enter 0 to signal the end of the list." << endl;
    cout << " ? ";

    while (cin >> n && n != sentinel) {
        cout << " ? ";
        if (n > largest) {
            largest = n;
        }
    }

    cout << "The largest value was " << largest << "." << endl;

    return 0;
}