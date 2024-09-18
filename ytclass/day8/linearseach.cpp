#include <iostream>
using namespace std;

int linearsearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
            
        }
    }
    return -1;
    
}

int main() {
    int arr[] = {1,4,55,2,56,49,90,20};
    int sz = sizeof(arr)/sizeof(int);
    int target = 50;
    cout<<linearsearch(arr,sz,target)<<endl;
    return 0;
}
