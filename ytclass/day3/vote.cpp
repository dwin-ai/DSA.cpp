#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter age:";
    cin>>age;
    
    if (age>=18){
        cout<<"eligible to vote";
    } else {
        cout<<"MINOR!";
    }

    return 0;
}
