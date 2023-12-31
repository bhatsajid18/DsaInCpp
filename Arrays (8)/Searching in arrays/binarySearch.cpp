// Binary Search (array should be sorted)

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0, e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
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

    cout<<"Index of key : "<<binarySearch(arr,n,key)<<endl;
}