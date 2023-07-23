//For every pair of vetrices u & v, find the shortest path from u to v.

//Using adjacency matrix
// for directed graph
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
    // int m;
    // cin>>m;
    vvi graph;
    // rep(i,0,m){
    //     vi t;
    //     rep(j,0,m){
    //         int x;
    //         cin>>x;
    //         if (x==-1){
    //             t.push_back(inf);
    //         }
    //         else{
    //             t.push_back(x);
    //         }
    //     }
    //     graph.push_back(t);
    // }
    vi a;
    a.push_back(0);
    a.push_back(5);
    a.push_back(inf);
    a.push_back(10);
    vi b;
    b.push_back(inf);
    b.push_back(0);
    b.push_back(3);
    b.push_back(inf);
    vi c;
    c.push_back(inf);
    c.push_back(inf);
    c.push_back(0);
    c.push_back(1);
    vi d;
    d.push_back(inf);
    d.push_back(inf);
    d.push_back(inf);
    d.push_back(0);
    graph.push_back(a);
    graph.push_back(b);
    graph.push_back(c);
    graph.push_back(d);
    // graph={{0,5,inf,10},{inf,0,3,inf},{inf,inf,0,1},{inf,inf,inf,0}};

    int n=graph.size();
    vvi dist=graph;

    rep(k,0,n){
        rep(i,0,n){
            rep(j,0,n){
                if (dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
                
            }
        }
    }
    rep(i,0,n){
        rep(j,0,n){
            if (dist[i][j]==inf){
                cout<<"INF ";
            }
            else{
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}