#include <iostream>
using namespace std;

int minnums(int a,int b){
    if(a>b){
        cout<<"min:"<<a<<endl;;
    } else {
        cout<<"min:"<<b<<endl;;
    }
    return 0;
}

int main()
{
    minnums(10,5);
    minnums(10,20);
    return 0;
}
