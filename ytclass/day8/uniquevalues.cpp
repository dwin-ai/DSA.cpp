#include <iostream>
using namespace std;

void findUnique(int arr[], int sz) {
    cout << "Unique elements: ";

    // Iterate over each element in the array
    for (int i = 0; i < sz; i++) {
        bool isUnique = true;

        // Check if this element has appeared before in the array
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        // If the element is unique, print it
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {2, 3, 4, 2, 4, 7, 9, 9};
    int sz = sizeof(arr) / sizeof(arr[0]);

    findUnique(arr, sz);

    return 0;
}
