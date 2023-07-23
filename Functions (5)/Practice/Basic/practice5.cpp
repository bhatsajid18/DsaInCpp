// Pascal triangle

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
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<nCr(i,j)<<"\t";
        }
        cout<<endl;
    }
   
}