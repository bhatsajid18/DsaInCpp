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


const int N=1e5+7;
int dp[N];

//top-bottom (memoization)
long long fib(int n){
    if (n==0 || n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    
    if (dp[n]!=-1){
        return dp[n];
    }
    
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}

int main(){
    rep(i,0,N){
        dp[i]=-1;
    }
    int n;
    cin>>n;

    cout<<fib(n)<<endl;
}

// //bottom-up(tabulation)
// int main(){
//     int n;
//     cin>>n;
//     vi dp(n+1);
//     dp[0]=0;
//     dp[1]=0;
//     dp[2]=1;

//     rep(i,3,n+1){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     cout<<dp[n]<<endl;
// }