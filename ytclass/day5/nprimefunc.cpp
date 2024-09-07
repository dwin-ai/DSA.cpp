#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) {
            return false; // If divisible, it's not prime
        }
    }
    return true;
}

// Function to print all prime numbers from 1 to n
void printPrimesUpToN(int n) {
    for (int i = 2; i <= n; i++) {  // Start from 2, since 1 is not prime
        if (isPrime(i)) {
            cout << i << " ";  // Print the number if it's prime
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Prime numbers from 1 to " << n << " are: ";
    printPrimesUpToN(n);  // Call the function to print primes up to n
    return 0;
}
