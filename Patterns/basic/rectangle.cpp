#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter rows:\n";
    cin>>r;
    cout<<"Enter coulmns:\n";
    cin>>c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}