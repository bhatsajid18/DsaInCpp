// Given an array with n elements that represent n positions along a straight line. Find K elements such that the minimum distance between any two elements is the maximum possible.
#include<iostream>
#include<algorithm>
using namespace std;

bool isFeasible(int mid, int arr[], int n, int k){
    int pos=arr[0], elements=1;

    for (int i = 1; i < n; i++){
        if (arr[i]-pos >= mid){
            pos=arr[i];
            elements++;
            if (elements==k){
                return true;
            }
        }
    }
    return false;
}

int largestMinDist(int arr[],int n, int k){
    sort(arr, arr+n);//sort from begin to end

    int res=-1;
    int left=1, right=arr[n-1];

    while (left<right){
        int mid=(left+right)/2;
        if(isFeasible(mid, arr, n, k)){
            res=max(res,mid);
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    
    return res;
}

int main(){
    int arr1[]={11,2,7,5,1,12};
    int k1=3, n1=6;

    int arr2[]={1,2,8,4,9};
    int k2=3, n2=5;
    

    cout<<"Largest min. distance in arr1 is: "<<largestMinDist(arr1, n1, k1)<<endl;

    cout<<"Largest min. distance in arr2 is: "<<largestMinDist(arr2, n2, k2)<<endl;
}