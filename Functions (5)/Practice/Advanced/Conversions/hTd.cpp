// Hexadecimal to decimal

#include<iostream>

#include<cmath>
using namespace std;

int hTd(string n){
    int ans=0, x=1,flag;
    int s = n.size(); //predefined in sttring
    
    for (int i = s-1; i >= 0; i--)
    {
        if (n[i]>='0' && n[i]<='9')
        {
            ans += (n[i]-'0')*x;
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans += (n[i]-'A'+10)*x;
        }
        x *= 16;
    }
    
    return ans;
}

int main(){
    string n;
    cout<<"Hexadecimal: ";
    cin>>n;

    if (!hTd(n))
    {
        cout<<"Invalid hexadecimal.\n";
    }
    else
    {
        cout<<"Decimal: "<<hTd(n)<<endl;
    }
    
}