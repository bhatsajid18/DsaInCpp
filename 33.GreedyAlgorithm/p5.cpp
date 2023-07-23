//EXPEDI

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
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;

        vii a(n);
        rep(i,0,n){
            cin>>a[i].ff>>a[i].ss; //ff->distance from town,,,ss->fuel available
        }

        int l,p;
        cin>>l>>p; //l-->initial distance from town,,,p-->initial units of fuel

        rep(i,0,n){
            a[i].ff=l-a[i].ff; //updated to distance from truck
        }
        sort(a.begin(), a.end());

        int ans=0,curr=p;

        priority_queue<int,vi> pq;

        bool flag=false;

        rep(i,0,n){
            if (curr>=l){
                break;
            }
            while (curr < a[i].ff){
                if (pq.empty()){
                    flag = true;
                    break;
                }
                ans++;
                curr += pq.top();
                pq.pop();

            }
            if (flag){
                break;
            }
            pq.push(a[i].ss);
        }

        if (flag){
            cout<<-1<<endl;
            continue;
        }
        while (!pq.empty() and curr<l){
            curr += pq.top();
            pq.pop();
            ans++;
        }
        if (curr<l){
            cout<<-1<<endl;
            continue;
        }
        cout<<ans<<endl;
    }
    
}