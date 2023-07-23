//DFS (Depth First Search) traversal of a graph

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

const int N=1e5+2, MOD=1e9+2;
vi adj[N];
bool vis[N];

void dfs(int node){
    vis[node]=true;
    cout<<node<<" "; //preOrder

    vi::iterator it;

    for(it=adj[node].begin(); it!=adj[node].end(); it++){
        if (!vis[*it]){
            dfs(*it);
        }
    }

    // cout<<node<<" "; //postOrder
}

int main(){
    int n,m;
    cin>>n>>m;

    rep(i,0,N){
        vis[i]=false;
    }
    int x,y;
    rep(i,0,m){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    cout<<endl;
}