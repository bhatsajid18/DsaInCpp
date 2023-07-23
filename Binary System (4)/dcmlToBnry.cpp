// Decimal Number System to Binary Number System

#include<iostream>
using namespace std;

int main(){
    int n,b=0,rem;
    cout<<"Enter any decimal number:\n";
    cin>>n;

    for (; n > 0; n/=2)
    {
        rem=n%2;
        b=b*10+rem;
    }
    cout<<"Its corresponding binary number = "<<b<<endl;
}