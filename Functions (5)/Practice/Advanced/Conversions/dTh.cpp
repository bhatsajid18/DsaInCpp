// Decimal to Hexadecimal.

#include<iostream>
#include<cmath>
using namespace std;

string dTh(int n){
    int y,x=1;
    string ans="";
    while (x<=n)
    {
        x *= 16;
    }
    x/=16;

    while (x>0)
    {
        int lstDgt=n/x;
        n -= lstDgt*x;
        x/=16;
        if (lstDgt<=9)
        {
            ans += to_string(lstDgt);
        }
        else
        {
            char c='A'+lstDgt-10;
            // ans.push_back(c);
            ans+=c;
        } 
    }
    
    return ans;
}

int main(){
    int n;
    cout<<"Decimal: ";
    cin>>n;

    cout<<"Hexadecimal: "<<dTh(n)<<endl;
    
}