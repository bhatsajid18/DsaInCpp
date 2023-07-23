#include<iostream>
using namespace std;

void tobase(int n, int base){
    if (n==0){
        return;
    }
    tobase(n/base,base);

    if (n%base>=10){
        cout<<char('A'+n%base-10);
    }
    else{
        cout<<n%base;
    }
}

int main(){
    int n,base;
    cout<<"Enter number in decimal system:\n";
    cin>>n;
    cout<<"Enter base of resultant number system:\n";
    cin>>base;
    cout<<"Required number = ";
    tobase(n,base);
    cout<<endl;
}