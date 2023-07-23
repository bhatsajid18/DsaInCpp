// Array: group of data items of similar type.

#include<iostream>
using namespace std;

int main(){
    // int array[4]={10,20,30,40};
    int n;
    cout<<"Enter array size:\n";
    cin>>n;
    int array[n];
    cout<<"Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    

    // cout<<array[3];
}