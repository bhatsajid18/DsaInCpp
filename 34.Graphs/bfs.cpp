//BFS (Breadth First Search) traversal of a graph

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
vi adjl[N];
bool vis[N]; //visited array( marks the vsisted nodes)

int main(){
    rep(i,0,N)
        vis[i]=0;
    
    int n,m;
    cin>>n>>m;

    int x,y;
    rep(i,0,m){
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    queue<int> q;

    q.push(1);
    vis[1]=1;

    while (!q.empty()){
        int node=q.front();
        q.pop();

        cout<<node<<endl;

        vi::iterator it;

        for(it=adjl[node].begin(); it!=adjl[node].end(); it++){
            if (!vis[*it]){
                vis[*it]=true;
                q.push(*it);
            }
        }
    }
}