#include<iostream>
using namespace std;

void restoreUp(int arr[],int i){
    int k=arr[i];
    int iParent=i/2;

    while (arr[iParent]<k){
        arr[i]=arr[iParent];
        i=iParent;
        iParent=i/2;
    }
    arr[i]=k;
}

void restoreDown(int arr[],int i, int n){
    int k=arr[i];
    int lChild=2*i;
    int rChild=2*i+1;

    while (rChild<=n){
        if (k>=arr[lChild] && k>=arr[rChild]){
            arr[i]=k;
            return;
        }
        else if (arr[lChild] > arr[rChild]){
            arr[i]=arr[lChild];
            i=lChild;
        }
        else{
            arr[i]=arr[rChild];
            i=rChild;
        }
        lChild=2*i;
        rChild=2*i+1;
    }

    //if no. of nodes is even
    if (lChild==n && k<arr[lChild]){
        arr[i]=arr[lChild];
        i=lChild;
    }
    arr[i]=k;
}

void buildHeapBottomUp(int arr[],int n){
    for (int i = n/2; i >=1; i--){
        restoreDown(arr,i,n);
    }
}

void buildHeapTopDown(int arr[],int n){
    for (int i = 2; i <=n; i++){
        restoreUp(arr,i);
    }
}

void insert(int arr[],int val, int n, int maxSize){
    if (n==maxSize){
        cout<<"Can't insert more.";
        return;
    }
    n++;
    arr[n]=val;
    restoreUp(arr,n);
}


int main(){
    int a1[]={99999,1,4,5,7,9,10};
    int n1=6;

    buildHeapBottomUp(a1,n1);
    for (int i = 1; i <= n1; i++){
        cout<<a1[i]<<" ";
    }cout<<"\n";
    
    int a2[]={99999,1,4,5,7,9,10};
    int n2=6;

    buildHeapTopDown(a2,n2);
    for (int i = 1; i <= n2; i++){
        cout<<a2[i]<<" ";
    }cout<<"\n";
}
