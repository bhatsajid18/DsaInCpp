//Given a weighted graph, find a single source shortest path from vertex u to all other vertices.

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
    vi dist(n+1,inf);

    vvii graph(n+1);

    rep(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        pii x;
        x.ff=v;
        x.ss=w;
        graph[u].push_back(x);

        pii y;
        y.ff = u;
        y.ss=w;
        graph[v].push_back(y);
    }
    int src;
    cin>>src;
    dist[src]=0;

    set<pii> s;
    pii t;
    t.ff=0;
    t.ss=src;
    s.insert(t);

    while (!s.empty()){
        auto x=*(s.begin());
        s.erase(x);

        for(auto it : graph[x.ss]){
            if (dist[it.ff] > dist[x.ss]+it.ss){
                pii mn;
                mn.ff=(dist[it.ff]);
                mn.ss=it.ff;
                s.erase(mn);
                dist[it.ff] = dist[x.ss]+it.ss;

                pii y;
                y.ff=(dist[it.ff]);
                y.ss= (it.ff);
                s.insert(y);
            } 
        }
    }
    
    rep(i,1,n+1){
        if (dist[i]<inf){
            cout<<dist[i]<<" ";
        }
        else{
            cout<<"-1 ";
        }
    }
}