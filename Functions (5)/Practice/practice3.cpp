// Factorial of a number.

#include<iostream>
using namespace std;

int fact(int num){
    int f=1;
    for (int i = 2; i <= num; i++)
    {
        f *= i;
    }
    return f;
}

int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;

    int ans = fact(n);
    cout<<n<<"! = "<<ans<<endl;

    return 0;
}