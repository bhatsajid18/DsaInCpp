//Minimum and Maximum array differences

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

int main(){
    int n;
    cin>>n;
     vi a(n);
     rep(i,0,n)
        cin>>a[i];
    
    sort(a.begin(), a.end());

    long long mn=0, mx=0;

    rep(i,0,n/2){
        mx += abs(a[n/2+i]-a[i]);
        mn += abs(a[2*i+1]-a[2*i]);
    }

    cout<<mn<<"  "<<mx<<"\n";
}