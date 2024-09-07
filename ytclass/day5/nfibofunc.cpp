#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int a = 0, b = 1, fib;
    
    for (int i = 2; i <= n; i++) {
        fib = a + b;  // Calculate the next Fibonacci number
        a = b;  // Update a to the previous b
        b = fib;  // Update b to the current Fibonacci number
    }
    
    return fib;
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
