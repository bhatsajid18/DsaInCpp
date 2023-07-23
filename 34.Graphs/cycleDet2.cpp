//Cycle Detection in undirected graph using DSU(Disjoint Set Union)

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

const int N=1e5+2;
vi parent(N);
vi sz(N);

void makeSet(int v){
    parent[v]=v;
    sz[v]=1;
}

int findSet(int v){
    if (v==parent[v]){
        return v;
    }
    return parent[v]=findSet(parent[v]);
}

void unionSets(int a, int b){
    a=findSet(a);
    b=findSet(b);

    if (a!=b){
        if (sz[a]<sz[b]){
            swap(a,b);
        }
        parent[b]=a;
        sz[a] += sz[b];
    }   
}

int main(){
    int n,m;
    cin>>n>>m;

    vvi edges;

    rep(i,0,N){
        makeSet(i);
    }

    bool cycle=false;

    rep(i,0,m){
        int u,v;
        cin>>u>>v;

        vi x;
        x.push_back(u);
        x.push_back(v);

        edges.push_back(x);
    }

    for (auto i : edges){
        int u=i[0];
        int v=i[1];

        int x=findSet(u);
        int y=findSet(v);

        if (x==y){
            cycle=true;
        }
        else{
            unionSets(u,v);
        }
    }
    

    if (cycle){
        cout<<"Cycle is present.\n";
    }
    else{
        cout<<"Cycle is not present.\n";
    }
    

}