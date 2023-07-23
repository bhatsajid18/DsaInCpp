//Smallest subsequence with sum >= k
#include<iostream>
using namespace std;
#include<queue>
#include<vector>

#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    priority_queue<int,vector<int> > h;
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
        h.push(a[i]);

    }

    int sum=0;
    // rep(i,0,n){
    //     h.push(a[i]);
    // }

    while (!h.empty()){
        sum+=h.top();
        h.pop();
        count++;
        if (sum>=k){
            break;
        }
    }
    if (sum<k){
        cout<<"No such subsequence exists.\n";
    }
    else{
        cout<<count<<endl;
    }
}