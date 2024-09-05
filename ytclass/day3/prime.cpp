#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a no:";
    cin>>n;
    bool isprime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }
    if (isprime==true){
        cout<<"prime";
    } else {
        cout<<"non prime";
    }
    
    return 0;
}
