//Check for Armstrong number. (sum of cubes of digits is equal to the number)

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num, lastDgt, sum=0;
    cout<<"Enter any number:\n";
    cin>>num;
    int m=num;

    for (; num > 0; num/=10)
    {
        lastDgt=num%10;
        sum += pow(lastDgt,3);
    }

    if (m==sum)
    {
        cout<<m<<" is an Armstrong number.\n";
    }
    else
    {
        cout<<m<<" is not an Armstrong number.\n";
    }
    

}