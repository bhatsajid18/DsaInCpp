#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of lines:\n";
    cin>>n;
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }    
        cout<<endl; 
    }
    
}