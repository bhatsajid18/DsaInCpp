// reverse of a number

#include<iostream>
using namespace std;

int main(){
    int num, lastDgt, reverse=0;
    cout<<"Enter any number:\n";
    cin>>num;
    int m=num;

    for (; num > 0; num/=10)
    {
        lastDgt=num%10;
        reverse = reverse*10+lastDgt;
    }

    cout<<"Reverse of "<<m<<" = "<<reverse<<endl;
}