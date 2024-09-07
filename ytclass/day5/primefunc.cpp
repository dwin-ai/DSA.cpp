#include <iostream>
using namespace std;

int prime(int n) {
    if (n < 2) {
        cout << "non-prime" << endl;
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "non-prime" << endl;
            return 0; // Exit if a divisor is found
        }
    }
    cout << "prime" << endl; // If no divisors are found, the number is prime
    return 0;
}

int main() {
    prime(4); // Outputs: non-prime
    prime(5); // Outputs: prime
    return 0;
}
