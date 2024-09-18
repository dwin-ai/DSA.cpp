#include <iostream>
using namespace std;

int main() {
    int arr[]={1,4,6,7,3};
    int sz = sizeof(arr)/sizeof(int);
    int sum=0;
    int prod=1;
    
    for (int i=0;i<sz;i++){
        sum +=arr[i];
        prod *=arr[i];
        
    }
    cout<<sum<<endl;
    cout<<prod;
    return 0;
}
