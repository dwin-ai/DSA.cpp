#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArr(int arr[],int sz){
    int start = 0, end = sz-1;
    while (start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        
    }
}


int main() {
    int sz;
    cin>>sz;
    int arr[sz];
    
    for(int i=0;i<sz;i++){
        cin>>arr[i];
    }
    reverseArr(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
    return 0;
}
