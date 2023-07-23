//Topological sort of a graph

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
// vi adj[N];
bool vis[N];

int main(){
    int n,m;
    cin>>n>>m;
    vvi adj(n,vi(n));
    vi indeg(n,0);

    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }

    queue<int> q;

    rep(i,0,n){
        if (indeg[i]==0){
            q.push(i);
        }
    }

    while (!q.empty()){
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        vi::iterator it;
        for (it=adj[x].begin();it!= adj[x].end();it++){
            indeg[*it]--;
            if (indeg[*it]==0){
                q.push(*it);
            }
        }
    }
}