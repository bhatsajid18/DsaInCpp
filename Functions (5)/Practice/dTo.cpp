// Decimal to Octal.

#include<iostream>
#include<cmath>
using namespace std;

int dTo(int n){
    int ans=0, y,x=0;
    while (n>0)
    {
        y=n%8;
        ans += y*pow(10,x);
        n /= 8;
        x++;
    }
    return ans;
}
/*
int dTo(int n){
    int ans=0, y,x=1;
    while (x<=n)
    {
        x *= 8;
    }
    x/=8;

    while (x>0)
    {
        int lstDgt=n/x;
        n -= lstDgt*x;
        x/=8;
        ans = ans*10 + lstDgt;
    }
    
    return ans;
}
*/
int main(){
    int n;
    cout<<"Decimal: ";
    cin>>n;

    cout<<"Octal: "<<dTo(n)<<endl;
    
}