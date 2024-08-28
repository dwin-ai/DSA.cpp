#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    bool d;
    cout<<"size of int"<<sizeof(a)<<endl;
    cout<<"size of float"<<sizeof(b)<<endl;
    cout<<"size of char"<<sizeof(c)<<endl;
    cout<<"size of bool"<<sizeof(d)<<endl;

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
