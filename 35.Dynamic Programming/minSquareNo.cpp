//minimum no. of squares whose sum equals to given no. n
//26 = 1^2 +5^2 = 1^2 + 3^2 4^2 (min=2)

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


const int N=1e5+7, MOD=1e7+2;
int dp[N];

//memoization
int minsquare(int n){
    if (n>=0 && n<=3){
        return n;
    }
    if (dp[n]!=MOD){
        return dp[n];
    }
    
    int ans=MOD;
    for(int i=1; i*i<=n; i++){
        dp[n]=min(dp[n],1+minsquare(n-i*i));
    }
    return dp[n];
}

int main(){
    rep(i,0,N){
        dp[i]=MOD;
    }
    int n;
    cin>>n;
    cout<<minsquare(n)<<endl;
    
}


// //tabulation
// int main(){
//     int n;cin>>n;
//     vi dp(n+1,MOD);
//     dp[0]=0;dp[1]=1;dp[2]=2;dp[3]=3;

//     for(int i=1;i*i<=n;i++){
//         for(int j=0;i*i+j<=n;j++){
//             dp[i*i+j]=min(dp[i*i+j],1+dp[j]);
//         }
//     }
//     cout<<dp[n]<<endl;
// }