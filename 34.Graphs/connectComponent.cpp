//Find the number of connected components and their size in an unconnected graph

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

vb vis;
int n,m;
vvi adj;
vi components;

int getComp(int idx){
    if (vis[idx]){
        return 0;
    }

    vis[idx]=true;
    int ans=1;
    vi::iterator it;
    for(it=adj[idx].begin(); it!=adj[idx].end(); it++){
        if (!vis[*it]){
            ans += getComp(*it);
            vis[*it]=true;
        }
    }
    return ans;
}

int main(){
    cin>>n>>m;

    adj=vvi(n);
    vis=vb(n,0);

    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    rep(i,0,n){
        if (!vis[i]){
            components.push_back(getComp(i));
        }
    }

    vi::iterator it;
    for(it=components.begin(); it!=components.end(); it++){
        cout<<*it<<" "; //size of each component
    }
    cout<<"\n"<<components.size()<<endl; //number of components

}