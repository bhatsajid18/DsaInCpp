//Indian coin change problem
#include<iostream>
#include<vector>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for (int i = a;i<b; i++)


int main(){
    int n;
    cin>>n;

    vi a(n);
    rep(i,0,n)
        cin>>a[i];

    int x;
    cin>>x;

    sort(a.begin(), a.end(), greater<int>() );

    int ans=0;
    rep(i,0,n){
        ans += x/a[i];
        x -= x/a[i]*a[i];
        if (x==0){
            break;
        } 
    }

    cout<<ans<<endl;
}