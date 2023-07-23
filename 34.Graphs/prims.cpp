// Same problem as that of kruskal's algorithm

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
#define rep(i,a,b) for (int i = a;i<b; i++)
#define ff first
#define ss second
#define vb vector<bool>

const int N=1e5+2;
const int inf=1e9;
int cost=0;
vvi g[N];
vi parent(N);
vi dist(N); //distance
vb vis(N,false);
int n,m;

void primsMst(int src){
    rep(i,1,n){
        dist[i]=inf;
    }  
    set<vi> s;
    dist[src]=0;
    vi t;
    t.push_back(0);
    t.push_back(src);
    s.insert(t);

    while (!s.empty()){
        auto x=*(s.begin());
        s.erase(x);
        vis[x[1]]=true;
        int u=x[1];
        int v=parent[x[1]];
        int w=x[0];
        // cout<<u<<" "<<v<<" "<<w<<"\n";
        cost += w;

        for(auto i: g[x[1]]){
            if (vis[i[0]]){
                continue;
            }
            if (dist[i[0]]>i[1]){
                vi x;
                x.push_back(dist[i[0]]);
                x.push_back(i[0]);
                s.erase(x);
                dist[i[0]] = i[1];

                vi y;
                y.push_back(dist[i[0]]);
                y.push_back(i[0]);
                s.insert(y);
                parent[i[0]]=i[1];
            }
            
        }
    }
    
}

int main(){
    cin>>n>>m;

    rep(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        vi x;
        x.push_back(v);
        x.push_back(w);
        g[u].push_back(x);

        vi y;
        y.push_back(u);
        y.push_back(w);
        g[v].push_back(y);
    }
    primsMst(0);
    
    cout<<"Cost of MST: "<<cost<<"\n";
}