//Fractional Knapsack: same as 0/1 knapsack but here we can also take some part (fraction) of the item.

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vector<int> >
#define rep(i,a,b) for (int i = a;i<b; i++)

bool compare(pii p1,pii p2){
    double v1=(double) p1.first/p1.second;
    double v2=(double) p2.first/p2.second;

    return v1>v2;
}

int main(){
    int n;
    cin>>n;
    vii a(n);
    rep(i,0,n){
        cin>>a[i].first>>a[i].second;
    }
    int W;
    cin>>W;
    sort(a.begin(), a.end(), compare);

    int ans=0;
    rep(i,0,n){
        if (W>=a[i].second){
            ans += a[i].first;
            W -= a[i].second;
            continue;
        }
        double vw=(double) a[i].first/a[i].second;
        ans += vw*W;
        W=0;
        break;
    }
    cout<<ans<<endl;
}