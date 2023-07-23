#include<iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1], b[n2];
    int i=0,j=0,k=l;
    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    while (i<n1 && j<n2){
        if (a[i]<b[j]){
            arr[k]=a[i];
            i++;k++;
        }
        else{
            arr[k]=b[j];
            j++;k++;
        }
    }
    while (i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while (j<n2){
        arr[k]=b[j];
        j++;k++;
    }   
}

void mergeSort(int arr[],int l, int r){
    if (l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

int main(){
    int arr[]={2,1,5,8,3};
    mergeSort(arr,0,4);
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    
}