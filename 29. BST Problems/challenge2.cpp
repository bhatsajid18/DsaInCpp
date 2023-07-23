//n = no. of books with given no. of pages(ascending order)
//m = no. if students
//All the books have to be divided among m students, consecutively. Allocate the pages in such a way that max. pages allocated to a student is min.

#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int arr[],int n,int m,int min){
    int studentsRequired=1, sum=0;

    for (int i = 0; i < n; i++){
        if (arr[i]>min){
            return false;
        }
        if (sum+arr[i] > min){
            studentsRequired++;
            sum=arr[i];
            
            if (studentsRequired > m){
                return false;
            }
        }
        else{
            sum += arr[i];
        }
    }
    return true;
}

int allocateMinPages(int arr[], int n, int m){
    int sum=0;
    if (n<m){
        return -1;
    }
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int start=0, end=sum, ans=INT_MAX;
    while (start <= end){
        int mid=(start+end)/2;
        if (isPossible(arr,n,m,mid)){
            ans = min(ans,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={12,34,67,90};
    int n=4,m=2;
    cout<<"Min. no. of pages: "<<allocateMinPages(arr,n,m)<<endl;
    return 0;
}