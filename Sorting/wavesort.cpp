#include<iostream>
using namespace std;

void wavesort(int arr[], int n){
    for (int i = 1; i < n; i+=2){
        if (arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if (arr[i]>arr[i+1] && i<n-1){
            swap(arr[i],arr[i+1]); //swap is inbuilt function in c++
        }
    }
}

int main(){
    int arr[]={1,3,4,7,5,6,2};
    wavesort(arr,7);
    for (int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
    
}