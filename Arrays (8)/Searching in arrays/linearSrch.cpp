// Linear Search

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter array size:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter key value:\n";
    cin>>key;

    cout<<"Index of key : "<<linearSearch(arr,n,key)<<endl;
}