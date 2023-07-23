//Cycle Detection in undirected graph

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
#define vb vector<bool>

// const int N=1e5+2, MOD=1e9+2;
// bool vis[N];

bool isCycle(int src, vvi &adj, vb &visited, int parent){
    visited[src]=true;
    for (auto i : adj[src]){
        if (i!=parent){
            if (visited[i]){
                return true;
            }
            if (!visited[i] and isCycle(i,adj,visited,src)){
                return true;
            }   
        }
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;

    vvi adj(n);

    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool cycle=false;

    vb visited(n,false);

    rep(i,0,n){
        if (!visited[i] and isCycle(i,adj,visited,-1)){
            cycle = true;
        }
    }
    if (cycle){
        cout<<"Cycle is present.\n";
    }
    else{
        cout<<"Cycle is not present.\n";
    }
    

}