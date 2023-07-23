#include<iostream>
using namespace std;

int main(){
    char op;
    int a,b;
    cout<<"\nEnter one number:\n";
    cin>>a;
    cout<<"Enter operator:\n";
    cin>>op;
    cout<<"Enter second number:\n";
    cin>>b;
    cout<<endl;
    switch (op)
    {
    case '+':
        cout<<a<<"+"<<b<<"="<<a+b;
        break;
    case '-':
        cout<<a<<"-"<<b<<"="<<a-b;
        break;
    case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;
    case '/':
        cout<<a<<"/"<<b<<"="<<a/b;
        break;
    case '%':
        cout<<a<<"%"<<b<<"="<<a%b;
        break;
    default:
        cout<<"Invalid Operator.";
        break;
    }
}