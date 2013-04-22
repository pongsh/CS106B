// Asks the user for an integer N and outputs the sum of the first N odd integers.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Please enter an integer: ";
    cin >> N;

    int total = 0;

    for (int n = 1; n <= N; ++n) {
        total += n*2-1;
    }

    cout << total;

    return 0;	
}