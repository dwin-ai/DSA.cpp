#include <iostream>
using namespace std;

int sumdigit(int n){
    int sum = 0;
    int last;
    while(n>0){
        last = n%10;
        n = n/10;
        sum +=last;
    }
    return sum;
}

int main()
{
    cout<<sumdigit(53)<<endl;
    cout<<sumdigit(56)<<endl;
    return 0;
}
