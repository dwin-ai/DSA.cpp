#include <iostream>
using namespace std;

int main() {
    int choice;
    int a,b;
    cout<<"enter first no.";
    cin>>a;
    cout<<"enter second no.";
    cin>>b;
    cout<<"enter a choice:";
    cin>>choice;
    if (choice==1){
        cout<<a+b;
    } else if (choice==2) {
        cout<<a-b;
    } else if (choice==3) {
        cout<<a*b;
    } else if (choice==4) {
        cout<<a/b;
    } else if (choice==5) {
        cout<<a%b;
    } else {
        cout<<"invalid choice";
    }
    return 0;
}
