// Calculating binary coefficient  (nCr)

#include<iostream>
using namespace  std;

int fact(int num){
    int f=1;
    for (int i = 2; i <= num; i++)
    {
        f *= i;
    }
    return f;
}

int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n,r;
    cout<<"Enter values of n & r respectively:\n";
    cin>>n>>r;

    cout<<n<<"C"<<r<<" = "<<nCr(n,r)<<endl;

}
