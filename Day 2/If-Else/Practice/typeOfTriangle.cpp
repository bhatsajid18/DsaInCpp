#include<iostream>
using namespace std;
 int main(){
    int s1,s2,s3;
    cout<<"Enter sides of triangle:\n";
    cin>>s1>>s2>>s3;

    if (s1==s2 && s1==s3)
    {       
        cout<<"Equilateral Triangle";   
    }
    else if((s1==s2 && s1!=s3) || (s1==s3 && s1!=s2) || (s3==s2 && s1!=s3)){
        cout<<"Isosceles Triangle";
    }
    else{
        cout<<"Scalene Triangle";
    }
 }