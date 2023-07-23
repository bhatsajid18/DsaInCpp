//First k distinct elements in the stream(array).

#include<iostream>
#include<map>
#include<vector>
#include<utility>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    
    map<int,int> freq;

    rep(i,0,n){
        int presentSize=freq.size();
        if (freq[a[i]]==0 && presentSize==k){
            break;
        }
        freq[a[i]]++;
    }

    map<int,int> :: iterator it;
    for(it=freq.begin(); it!=freq.end(); it++){
        if (it->second != 0){
            cout<<(it->first)<<" ";
        }
    }
    cout<<endl;
}