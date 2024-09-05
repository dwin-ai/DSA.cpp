#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a no:";
    cin>>n;
    int sum3=0;
    /*
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum3+=i;
        }
    }*/
    for (int i =0;i<=n;i+=3){
        sum3+=i;
    }
    cout<<sum3;
    return 0;
}
