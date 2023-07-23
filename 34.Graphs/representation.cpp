//Adjacency matrix: if a[i][j]=1, there is edge b/w i&j and in case of directed graph edge is from i to j. if a[i][j]=1 there is no edge b/w i and j

//Adjacency list:  For each node, its adjacent nodes are stored in its vector


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
vi adjl[N]; //Adjacency list  ( [] indicate array of vectors)

int main(){
    int n,m;
    cin>>n>>m; //n->vertices....m->edges

    //Adjacency matrix

    vvi adjm(n+1,vi(n+1,0)); //Adjacency matrix

    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }

    cout<<"Adjacency matrix of above graph:\n";
    rep(i,1,n+1){
        rep(j,1,n+1)
            cout<<adjm[i][j]<<" ";
        cout<<"\n";
    }


    //Adjacency list

    cin>>n>>m;
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    cout<<"Adjacency list of above graph:\n";
    rep(i,1,n+1){
        cout<<i<<"->";
        vi :: iterator it;
        for (it=adjl[i].begin(); it!=adjl[i].end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }    
}