#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(3);

    for(auto i : s){
        cout<<i<<" ";
    } //3 4 1 2  any random order
    cout<<endl;
   

    //no upper/lower bounds because elements are not sorted

   

}