#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(3);

    // for(auto i : s){
    //     cout<<i<<" ";
    // } //1 2 3 4
    // cout<<endl;
    // //OR
    // for(auto i=s.begin(); i!=s.end(); i++){
    //     cout<<*i<<" ";
    // } //1 2 3 4
    // cout<<endl;

    // //Printing in reverse
    // for(auto i=s.rbegin(); i!=s.rend(); i++){
    //     cout<<*i<<" ";
    // } //4 3 2 1

    // cout<<endl<<s.size()<<endl; //4


    set<int,greater<int> > s1; //orders in descending order
    s1.insert(2);
    s1.insert(1);
    s1.insert(4);
    s1.insert(4);
    s1.insert(3);

    for(auto i : s1){
        cout<<i<<" ";
    } //4 3 2 1
    cout<<endl;
    
    //lower and upper bounds
    cout<<*s.lower_bound(2)<<endl; //2
    cout<<*s.upper_bound(2)<<endl; //3
    cout<<*s.upper_bound(4)<<endl; //0: no number>4 is present

    s.erase(2); //will erase element 2
    s.erase(s.begin()); //will erase elemnt at the beginning
}