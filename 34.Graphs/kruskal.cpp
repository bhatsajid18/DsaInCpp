//To find the cost of minimum spanning tree

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
    rep(i,0,N){
        makeSet(i);
    }

    int n,m;
    cin>>n>>m;

    vvi edges;

    rep(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        vi x;
        x.push_back(w);
        x.push_back(u);
        x.push_back(v);
        edges.push_back(x);
    }

    sort(edges.begin(),edges.end());//sorting based on first element i.e., weight(w)
    int cost=0;

    for (auto i : edges){
        int w=i[0];
        int u=i[1];
        int v=i[2];

        int x=findSet(u);
        int y=findSet(v);

        if (x==y){
            continue;
        }
        else{
            cout<<u<<" "<<v<<"\n";
            cost += w;
            unionSets(u,v);
        }
    }
    cout<<"Cost of MST: "<<cost<<"\n";
}