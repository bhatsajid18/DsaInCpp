//given a set of coins and a value v, find the no. of ways we can make change of v
//s={1,2,3} v=3  posiible ways {1,1,1}, {1,2}, {3}

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



const int N=1e3+7, MOD=1e7+2;
int dp[N][N];

//memoization
int coinchange(vi &a,int n, int x){
    if (x==0){
        return 1;
    }
    if (x<0 || n<=0){
        return 0;
    }
    
    if (dp[n][x]!=-1){
        return dp[n][x];
    }
    dp[n][x]=coinchange(a,n,x-a[n-1])+coinchange(a,n-1,x);
    return dp[n][x];
}

int main(){
    rep(i,0,N){
        rep(j,0,N){
            dp[i][j]=-1;
        }
    }

    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    
    int x;
    cin>>x;

    cout<<coinchange(a,n,x)<<endl;
}


// //tabulation
// int main(){
//     int n;
//     cin>>n;
//     vi a(n);
//     rep(i,0,n)
//         cin>>a[i];
    
//     int x;
//     cin>>x;
//     vvi dp(n+1,vi(x+1,0));
//     dp[0][0]=1;
//     rep(i,1,n+1){
//         rep(j,0,x+1){
//             if (j-a[i-1]>=0){
//                 dp[i][j] += dp[i][j-a[i-1]];
//             }
//         }
//     }

//     cout<<dp[n][x]<<endl;
// }
