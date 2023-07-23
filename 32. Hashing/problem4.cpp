// Sliding window challenge
// Given an array with n elements, calculate the minimum sum of k consecutive elements. 

#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

//Optimal Approach O(n)
int main(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int currSum=0;
    rep(i,0,k){
        currSum+=a[i];
    }
    int minSum=currSum;
    cout<<"Sum in all windows:\n"<<currSum<<" ";
    //Sliding Window
    rep(i,1,n-k+1){
        currSum=currSum-a[i-1]+a[i+k-1];
        minSum=min(minSum,currSum);
        cout<<currSum<<" ";
    }
    cout<<"\nMinimum window sum = "<<minSum<<endl;
}

// // Brute Force Approach (O(n*k))
// int main(){
//     int n,k,minSum=INT_MAX;
//     cin>>n>>k;
//     vi v(n);
//     rep(i,0,n){
//         cin>>v[i];
//     }

//     rep(i,0,n-k+1){
//         int sum=0;
//         rep(j,i,i+k){
//             sum+=v[j];
//         }
//         minSum=min(minSum,sum);
//     }

//     cout<<minSum<<endl;
// }