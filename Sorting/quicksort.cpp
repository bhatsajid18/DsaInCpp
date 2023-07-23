#include<iostream>
using namespace std;

int partition(int arr[], int l, int r){
    int pivot=arr[r];
    int i=l-1;
    for (int j = l; j < r; j++){
        if (arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }  
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quicksort(int arr[],int l,int r){
    if (l<r){
        int pi=partition(arr,l,r);

        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main(){
    int arr[]={5,3,1,4,2};
    quicksort(arr,0,4);
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}