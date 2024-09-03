#include <iostream>
using namespace std;

int main() {
    // unary operators
    
    //increment 
    int a = 20;
    int b = ++a; //pre increment 
    int c = a++; // post increment 
    int d = --a; // pre decrement
    int e = a--; //post decrement 
    
    cout<<a<<endl; //final = 20
    cout<<b<<endl; //final = 21
    cout<<c<<endl; //final = 21
    cout<<d<<endl; //final = 21
    cout<<e<<endl; //final = 21
    return 0;
}
