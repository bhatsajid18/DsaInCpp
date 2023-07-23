//Cycle Detection in directed graph

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

bool isCycle(int src, vvi &adj, vb &visited, vi &stack){
    stack[src]=true;
    if (!visited[src]){
        visited[src]=true;
        vi :: iterator it;
        for(it=adj[src].begin(); it!=adj[src].end(); it++){
            if (stack[*it]){
                return true;
            }
            if (!visited[*it] and isCycle(*it,adj,visited,stack)){
                return true;
            }
        }
    }
    stack[src]=false;
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
    }

    bool cycle=false;

    vb visited(n,false);
    vi stack(n,0);

    rep(i,0,n){
        if (!visited[i] and isCycle(i,adj,visited,stack)){
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