#include <iostream>
using namespace std;

int main() {
    int arr[]={1,4,6,7,3};
    int sz = sizeof(arr)/sizeof(int);
    int sum=0;
    
    for (int i=0;i<sz;i++){
        sum +=arr[i];
        
    }
    cout<<sum;
    return 0;
}
