#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if (n%2==0 && n%3==0)
    {
        cout<<n<<" is divisible by both 2 as well as 3";
    }
    else{
        cout<<n<<" is not divisible by both 2 and 3";
    }
    
}