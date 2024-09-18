#include <iostream>
#include <algorithm> // For min and max functions
#include <limits.h>  // For INT_MAX and INT_MIN

using namespace std;

int main() {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int nums[] = {1, 2, 4, 6, 55, 77, -39};  // Added missing semicolon
    int size = sizeof(nums) / sizeof(int);
    
    for (int i = 0; i < size; i++) {
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
    }
    
    // Print the smallest and largest values
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;  // Correct return type for main function
}
