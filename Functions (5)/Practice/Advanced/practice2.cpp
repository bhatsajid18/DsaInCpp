//Check for the Pythagorean triplet.

#include<iostream>
#include<cmath>
using namespace  std;

bool pt(int x, int y, int z){
    int a = max(x,max(y,z));
    int b,c;

    if (a == x)
    {
        b=y;
        c=z;
    }
    else if (a == y)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    
    if (pow(a,2) == pow(b,2)+pow(c,2))
    {
        return true;
    }
    return false;
}



int main(){
    int n1,n2,n3;
    cout<<"Enter any three numbers:\n";
    cin>>n1>>n2>>n3;

    if (pt(n1,n2,n3))
    {
        cout<<"\nPythagorean Triplet.\n";
    }
    else
    {
        cout<<"\nNot Pythagorean Triplet.\n";
    }
    
}