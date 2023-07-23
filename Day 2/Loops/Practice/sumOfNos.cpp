#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout<<"Enter limit upto which you want to find sum numbers:\n";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    cout<<"Required sum = "<<sum<<endl;
}