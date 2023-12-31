// Adding two binary numbers.

#include<iostream>
#include<cmath>
using namespace std;

int reverse(int num){
    int rev=0;
    for (;num>0; num/=10)
    {
        int x=num%10;
        rev = rev*10+x;
    }
    return rev;
}

int addBinary(int a, int b){
    int ans=0, prevCarry=0;
    bool x;

    if (a%2==1 && b%2==1)
    {
        x=true;
    }
    

    while (a>0 && b>0){
        if (a%2==0 && b%2==0)
        {
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if (prevCarry==1)
            {
                ans = ans*10 + 0;
                prevCarry=1;
            }
            else
            {
                ans = ans*10 + 1;
                prevCarry=0;
            }
            
        }
        else
        {
            ans = ans*10 + prevCarry;
            prevCarry=1;
        }
        a/=10;
        b/=10;
    }

    while (a>0)
    {
        if (prevCarry==1)
        {
            if (a%2==1)
            {
                ans = ans*10 +0;
                prevCarry=1;
            }
            else
            {
                ans = ans*10 +1;
                prevCarry=0;
            }   
        }
        else
        {
            ans = ans*10 + (a%2);
        }
        a/=10;
    }
    
    while (b>0)
    {
        if (prevCarry==1)
        {
            if (b%2==1)
            {
                ans = ans*10 +0;
                prevCarry=1;
            }
            else
            {
                ans = ans*10 +1;
                prevCarry=0;
            }   
        }
        else
        {
            ans = ans*10 + (b%2);
        }
        b/=10;
    }

    if (prevCarry==1)
    {
        ans = ans*10+1;
    }
    ans = reverse(ans);
    if (x)
    {
        ans *= 10;
    }
    
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;
}