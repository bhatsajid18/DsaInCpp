//Check for a bipartite graph

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

vi col; //color
bool bipart=true;
vb vis;
vvi adj;

void color(int u, int curr){
    if (col[u]!=-1 and col[u]!=curr){
        bipart=false;
        return;
    }

    col[u]=curr;
    if (vis[u]){
        return;
    }
    vis[u]=true;

    for(auto i: adj[u]){
        color(i,curr xor 1);
    }
    
}

int main(){
    int n,m;
    cin>>n>>m;

    adj=vvi(n);
    vis=vb(n,false);
    col=vi(n,-1);  //-1=no color,  0=red,  1=blue

    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    rep(i,0,n){
        if (!vis[i]){
            color(i,0);
        }
    }

    if (bipart){
        cout<<"Graph is bipartite.\n";
    }
    else{
        cout<<"Graph is not bipartite.\n";
    }

}