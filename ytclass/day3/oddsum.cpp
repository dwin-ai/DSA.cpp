#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a no:";
    cin>>n;
    int oddsum = 0;
    
    /*for(int i=1;i<=n;i++){
        if(i%2!=0){
            oddsum+=i;
        }
    }
    */
    for (int i=1;i<=n;i+=2){
        oddsum+=i;
    }
    cout<<oddsum;
    return 0;
}
