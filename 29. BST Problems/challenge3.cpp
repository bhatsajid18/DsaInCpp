//PAINTER's PARTITION PROBLEM
// n = no. of boards with different lengths
// m = painters available
// A painter paints 1 unit of board in 1 unit of time and each painter will paint consecutive boards. Find the minimum time that will be required to paint all the boards.

#include<iostream>
#include<climits>
using namespace std;


int findFeasible(int arr[],int n,int limit){
    int painters=1, sum=0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
        if (sum>limit){
            sum=arr[i];
            painters++;
        }
    }
    return painters;
}

int minTime(int arr[], int n, int m){
    int sum=0, k=0;
    if (n<m){
        return -1;
    }
    for (int i = 0; i < n; i++){
        k=max(k,arr[i]);
        sum+=arr[i];
    }
    int low=k, high=sum;
    while (low < high){
        int mid=(low+high)/2;
        int painters=findFeasible(arr,n, mid);
        if (painters<=m){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

int main(){
    int arr[]={10,20,30,40};
    int n=4,m=2;
    cout<<"Min. time to paint boards: "<<minTime(arr,n,m)<<endl;
    return 0;
}