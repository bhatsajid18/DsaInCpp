//Given a weighted graph, find a single source shortest path from vertex u to all other vertices.
//Same problem as Dijkstra's Algorithm
//For directed graph

#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<set>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vector<int> >
#define vvii vector<vector<pair<int,int> > >
#define rep(i,a,b) for (int i = a;i<b; i++)
#define ff first
#define ss second
#define vb vector<bool>

const int inf=1e7;

int main(){
    int n,m;
    cin>>n>>m;

    vvi edges;
    vi dist(n,inf);

    rep(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        vi x;
        x.push_back(u);
        x.push_back(v);
        x.push_back(w);
        
        edges.push_back(x);
    }
    int src;
    cin>>src;
    dist[src]=0;
    
    rep(i,0,n-1){
        for( auto e:edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            dist[v]=min(dist[v],dist[u]+w);
        }
    }

    for(auto i:dist){
        cout<<i<<" ";
    }
}