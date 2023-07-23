#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(3);

    for(auto i : s){
        cout<<i<<" ";
    } //1 2 3 4 4
    cout<<endl;

    // s.erase(4); //All instances of 4 will be deleted

    // for(auto i : s){
    //     cout<<i<<" ";
    // } //1 2 3
    cout<<endl;

    s.erase(s.find(4)); //Only first 4 will be deleted

    for(auto i : s){
        cout<<i<<" ";
    } //1 2 3 4
    cout<<endl;

    cout<<s.size()<<endl;//4
   
}