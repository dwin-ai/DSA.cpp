#include <iostream>
using namespace std;

bool isPowerOf2(int x) {
    return (x > 0) && ((x & (x - 1)) == 0);
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
