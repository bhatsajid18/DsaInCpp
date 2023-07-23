#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(1); // 1 
    dq.push_back(2); // 1 2
    dq.push_front(3); // 3 1 2
    cout<<dq.front()<<endl; //3
    cout<<dq.back()<<endl; //2

    dq.push_front(4);
    dq.push_back(6);
    dq.push_front(7); 
    for (auto i : dq)
    {
        cout<<i<<" ";
    }//front--> 7 4 3 1 2 6 <--back
    cout<<endl;
    dq.pop_back();
    dq.pop_back();
    for (auto i : dq)
    {
        cout<<i<<" ";
    }//front--> 7 4 3 1 <--back

    cout<<endl<<dq.size();//4
}