//longest increasing subsequence

#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vector<int> >
#define rep(i,a,b) for (int i = a;i<b; i++)
#define ff first
#define ss second


const int N=1e3+7, MOD=1e7+2;
int dp[N];

// //memoization
// int lis(vi &a, int n){
//     if (dp[n]!=-1){
//         return dp[n];
//     }
//     dp[n]=1;
//     rep(i,0,n){
//         if (a[n] > a[i]){
//             dp[n]=max(dp[n],1+lis(a,i));
//         }
//     }
//     return dp[n];
// }

// int main(){
//     rep(i,0,N)
//         dp[i]=-1;
    
//     int n;
//     cin>>n;

//     vi a(n);
//     rep(i,0,n)
//         cin>>a[i];
    
//     cout<<lis(a,n-1)<<endl;
// }


//tabulation

int main(){
    int n;
    cin>>n;

    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    
    vi dp(n,1);
    int ans=0;

    rep(i,1,n){
        rep(j,0,i){
            if (a[i]>a[j]){
                dp[i]=max(dp[i],1+dp[j]);
            }
            ans=max(ans,dp[i]);
        }
    }

    cout<<ans<<endl;
}