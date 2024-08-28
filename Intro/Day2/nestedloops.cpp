#include <iostream>
using namespace std;

int main() {
    // Variables to store the three numbers
    int a, b, c;

    // Input from the user
    cin >> a >> b >> c;

    // Without using logical operators
    if (a > b) {
        if (a > c) {
            cout << a; // a is the largest
        } else {
            cout << c; // c is the largest
        }
    } else {
        if (b > c) {
            cout << b; // b is the largest
        } else {
            cout << c; // c is the largest
        }
    }

    return 0;
}
