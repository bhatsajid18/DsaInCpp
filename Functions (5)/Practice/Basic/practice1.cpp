// Print all prime numbers between 2 given numbers.

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    if (num==1)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false; // When this return statement is hit, function execution will come to an end, so no need to add break atatement.
        }    
    }
    return true;
}

int main(){
    int a,b;
    cout<<"Enter lower and upper limits respectively:\n";
    cin>>a>>b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<"\t";
        }    
    }
    return 0;
}

