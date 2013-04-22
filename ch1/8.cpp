// Reads an integer and displays the same digits in reverse order.
// Could have also just read integer as a string and reverse using iterators. string(n.rbegin(), n.rend())

#include <iostream>
using namespace std;

int reverseDigits(int &n) {
    int result = 0;
    while (n != 0) {
        result = (result * 10) + n % 10;
        n /= 10;
    }
    return result;
}

int main() {
    cout << "This program reverses the digits in an integer." << endl;

    cout << "Enter a positive integer: ";

    int n;
    cin >> n;

    cout << "The reversed integer is " << reverseDigits(n) << endl;

    return 0;
}