#include <iostream>
using namespace std;

int bitodec(int n){
    int ans = 0;
    int power = 1;
    
    while(n>0){
        int rem = n%10;
        ans+=(rem*power);
        n/=10;
        power*=2;
    }
    return ans;
} 

int main()
{
    int n = 10011;
    /*for (int i=1;i<=n;i++){
        cout<<dectobi(i)<<endl;
        
    } */
    cout<<bitodec(n)<<endl;
    

    return 0;
}
