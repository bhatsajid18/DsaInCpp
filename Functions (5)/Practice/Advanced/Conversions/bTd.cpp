// Binary to decimal

#include<iostream>
#include<cmath>
using namespace std;

int bTd(int n){
    int ans=0, x=1,flag,m=n;

    for (; m > 0; m/=10)
    {
        flag = m%10;
        if (!(flag==1 || flag==0))
        {
            return false;
        }
        
    }
    
    while (n>0)
    {
        int y=n%10;
        ans += y*x;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Binary: ";
    cin>>n;

    if (!bTd(n))
    {
        cout<<"Invalid binary.\n";
    }
    else
    {
        cout<<"Decimal: "<<bTd(n)<<endl;
    }
    
}