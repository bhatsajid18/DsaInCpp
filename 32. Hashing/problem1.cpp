//Count frequency of each element in a given array.
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> m; //first: key   and   second: value
    //initially value at any key (m[x]) is 0
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }

    unordered_map<int,int> :: iterator it;
    for (it=m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}