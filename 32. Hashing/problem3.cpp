//Count number of subarrays with sum equal to zero.
#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }

    map<int,int> cnt;

    // rep(i,0,n){
    int prefSum=0;
    //     rep(j,i,n){
    //         prefSum += a[j];
    //         cnt[prefSum]++;
    //     }
    // }
    rep(i,0,n){
        prefSum += a[i];
        cnt[prefSum]++;
    }

    int ans=0;

    map<int,int> :: iterator it;

    for(it=cnt.begin(); it!=cnt.end(); it++){
        int c=it->second;

        ans+= (c*(c-1))/2;

        if (it->first==0){
            ans+=it->second;
        }
    }

    cout<<ans<<endl;

    // cout<<cnt[0]<<endl;
}