#include <iostream>
using namespace std;

int main(){
  // Take input from user 
    int amt1, amt2;
    cout << "Enter amt1: "; // Prompt user for amt1
    cin >> amt1;
    cout << "Enter amt2: "; // Prompt user for amt2
    cin >> amt2;
    int sum = amt1 + amt2; // Calculate the sum
    cout << "The total amount is: " << sum << endl; // Output the result
    return 0;
}
