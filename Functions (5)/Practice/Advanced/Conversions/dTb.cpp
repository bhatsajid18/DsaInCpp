// Decimal to binary.

#include<iostream>
#include<cmath>
using namespace std;
/*
int dTb(int n){
    int ans=0, y,x=0;
    while (n>0)
    {
        y=n%2;
        ans += y*pow(10,x);
        n /= 2;
        x++;
    }
    return ans;
}
*/
int dTb(int n){
    int ans=0, y,x=1;
    while (x<=n)
    {
        x *= 2;
    }
    x/=2;

    while (x>0)
    {
        int lstDgt=n/x;
        n -= lstDgt*x;
        x/=2;
        ans = ans*10 + lstDgt;
    }
    
    return ans;
}

int main(){
    int n;
    cout<<"Decimal: ";
    cin>>n;

    cout<<"Binary: "<<dTb(n)<<endl;
    
}