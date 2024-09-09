#include <iostream>
using namespace std;

int dectobi(int n){
    int ans = 0;
    int power = 1;
    
    while(n>0){
        int rem = n%2;
        n/=2;
        
        ans+=(rem*power);
        power*=10;
    }
    return ans;
} 

int main()
{
    int n = 10;
    for (int i=1;i<=n;i++){
        cout<<dectobi(i)<<endl;
        
    }
    

    return 0;
}
