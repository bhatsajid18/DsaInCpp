// Fibanocci Sequence

#include<iostream>
using namespace std;

void fib(int num){
    int t1=0, t2=1, nextTerm;
    for (int i = 1; i <= num; i++)
    {
        cout<<t1<<"\t";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter total terms of Fibanocci Sequence you want to print:\n";
    cin>>n;

    fib(n);
}