#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a no:";
    cin>>n;
    int sum = 0;
    for(int i =1;i<=n;i++){
        sum = sum +i;
    } // for
    //while
    int sum = 0;
    int i = 1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum;
    return 0;
}
   
