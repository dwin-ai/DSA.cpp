#include <iostream>
#include <limits.h>  // For INT_MAX and INT_MIN

using namespace std;

int main() {
    int nums[] = {10, 2, 4, 6, 55, 77, -39};  // Array of numbers
    int size = sizeof(nums) / sizeof(int);
    
    // Initialize smallest and largest with the first element
    int smallest = nums[0];
    int largest = nums[0];
    
    // Indices for smallest and largest
    int smallestIndex = 0;
    int largestIndex = 0;
    
    for (int i = 1; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;  // Update smallest index
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;   // Update largest index
        }
    }
    
    // Print the indices of smallest and largest values
    cout << "Smallest value: " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest value: " << largest << " at index " << largestIndex << endl;

    return 0;
}
