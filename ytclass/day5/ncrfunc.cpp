#include <iostream>
using namespace std;

int nfactorial(int n){
    int fact = 1;
    for (int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = nfactorial(n);
    int fact_r = nfactorial(r);
    int fact_nmr = nfactorial(n-r);
    
    return fact_n/(fact_r * fact_nmr);
}
int main()
{
    int n = 6;
    int r = 3;
    cout<<nCr(n,r)<<endl;
    return 0;
}
