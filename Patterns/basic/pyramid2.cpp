// Half Pyramid after 180deg rotation
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of lines:\n";
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }  
        }    
        cout<<endl; 
    }
    
}