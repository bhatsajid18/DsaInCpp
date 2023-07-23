#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int> > pqMax; //max heap

    priority_queue<int,vector<int>,greater<int> > pqMin; //min heap

    pqMax.push(2);
    pqMax.push(3);
    pqMax.push(1);

    cout<<pqMax.top()<<endl; //3

    pqMax.pop(); //will pop 3
    cout<<pqMax.top()<<endl; //2

    cout<<pqMax.size()<<endl; //2

    pqMin.push(2);
    pqMin.push(3);
    pqMin.push(1);

    cout<<pqMin.top()<<endl; //1

    pqMin.pop(); //will pop 3
    cout<<pqMin.top()<<endl; //2

    cout<<pqMin.size()<<endl; //2

}