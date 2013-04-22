// Asks users for a list of integers and outputs the largest and second largest value.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int sentinel = 0;
    int n;
    vector<int> numbers;
    
    cout << "This program finds the largest integer in a list." << endl;
    cout << "Enter 0 to signal the end of the list." << endl;
    cout << " ? ";

    while (cin >> n && n != sentinel) {
        cout << " ? ";
        numbers.push_back(n);
    }

    sort(numbers.rbegin(), numbers.rend());

    cout << "The largest value was " << numbers[0] << "." << endl;
    cout << "The second largest value was " << numbers[1] << "." << endl;
    
    return 0;
}