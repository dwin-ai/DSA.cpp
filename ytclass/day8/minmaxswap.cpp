#include <iostream>
#include <limits.h>  // For INT_MAX and INT_MIN
#include <algorithm> // For swap

using namespace std;

void minmaxswap(int arr[], int sz) {
    int smallestIndex = 0;
    int largestIndex = 0;
    
    // Loop to find the indices of the smallest and largest elements
    for (int i = 1; i < sz; i++) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }
    
    // Swap the smallest and largest elements
    swap(arr[smallestIndex], arr[largestIndex]);
}

int main() {
    int arr[] = {2, 4, 1, 6, 5, 7};
    int sz = sizeof(arr) / sizeof(int);

    // Call the function to swap the smallest and largest elements
    minmaxswap(arr, sz);

    // Output the array after swapping
    cout << "Array after swapping smallest and largest: ";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

