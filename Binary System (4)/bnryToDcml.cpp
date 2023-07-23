// Binary Number System to Decimal Binary Number System

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=0,b,rem,x=0,m,t;
    cout<<"Enter any binary number:\n";
    cin>>b;
    m=b;
    while (m!=0){
        t=m%10;
        m/=10;
        if (!(t==0 || t==1))
        {
            cout<<"Invalid binary number.";
            x=1;
            break;
        }
        
    }
    
    if (x!=1)
    {
        for (; b > 0; b/=10)
        {
            rem=b%10;
            n+=rem*pow(2,x);
            x++;
        }
        cout<<"Its corresponding decimal number = "<<n<<endl;
    }
    
}