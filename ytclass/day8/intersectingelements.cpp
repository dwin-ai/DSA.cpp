#include <iostream>
using namespace std;

void intersectingelements(int arr1[], int sz1, int arr2[], int sz2) {
    cout << "Intersecting elements: ";
    
    for (int i = 0; i < sz1; i++) {
        for (int j = 0; j < sz2; j++) {
            if (arr1[i] == arr2[j]) {  // Check for common elements
                cout << arr1[i] << " ";  // Print intersecting element
                break;  // Exit inner loop when a match is found
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 5, 7, 8, 9};
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);

    intersectingelements(arr1, sz1, arr2, sz2);

    return 0;
}
