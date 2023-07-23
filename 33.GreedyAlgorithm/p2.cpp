//Activity selection problem
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vector<int> >
#define rep(i,a,b) for (int i = a;i<b; i++)

bool compare(vi &a, vi &b){
    return a[1]<b[1];
}

int main(){
    int n;
    cin>>n;

    vvi v;
    rep(i,0,n){
        int start,end;
        cin>>start>>end;
        vi x;
        x.push_back(start);
        x.push_back(end);
        v.push_back(x);
    }
    
    sort(v.begin(), v.end(), compare); //sorting based on ending time

    int take=1;
    int end=v[0][1];

    rep(i,1,n){
        if (v[i][0]>=end){
            take++;
            end = v[i][1];
        }
    }

    cout<<take<<"\n";
}