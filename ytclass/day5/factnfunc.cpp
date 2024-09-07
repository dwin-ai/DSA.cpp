#include <iostream>
using namespace std;

int factn(int n){
    int fact = 1;
    for(int i=n;i>0;i--){
        fact *= i;
        
        
    }
    return fact;
}

int main()
{
    cout<<factn(5)<<endl;
    cout<<factn(3)<<endl;
    return 0;
}
