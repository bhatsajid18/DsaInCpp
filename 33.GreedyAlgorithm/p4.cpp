//Optimal merge pttern

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

int main(){
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }

    priority_queue<int, vector<int> ,greater<int> > pq;

    rep(i,0,n){
        pq.push(a[i]);
    }

    int ans=0;

    while (pq.size()>1){
        int e1=pq.top();
        pq.pop();
        int e2=pq.top();
        pq.pop();
        ans += e1+e2;
        pq.push(e1+e2);
    }
    cout<<ans<<"\n";
}