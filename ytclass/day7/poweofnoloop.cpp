#include <iostream>
using namespace std;

bool isPowerOf2(int x) {
    if (x <= 0) {
        return false;
    }
    
    while (x > 1) {
        if (x % 2 != 0) {
            return false; 
        }
        x /= 2; 
    }
    
    return true; 
}

int main() {
    int n = 17;  
    if (isPowerOf2(n)) {
        cout << n << " is a power of 2." << endl;
    } 
    else {
        cout << n << " is not a power of 2." << endl;
    }
    return 0;
}
