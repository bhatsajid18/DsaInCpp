// Octal to decimal

#include<iostream>
#include<cmath>
using namespace std;

int oTd(int n){
    int ans=0, x=1,flag,m=n;

    for (; m > 0; m/=10)
    {
        flag = m%10;
        if (flag>7)
        {
            return false;
        }
        
    }
    
    while (n>0)
    {
        int y=n%10;
        ans += y*x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Octal: ";
    cin>>n;

    if (!oTd(n))
    {
        cout<<"Invalid octal.\n";
    }
    else
    {
        cout<<"Decimal: "<<oTd(n)<<endl;
    }
    
}