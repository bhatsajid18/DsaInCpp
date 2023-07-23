// Median of running stream: No's are coming and we have to tell median after each input.
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

priority_queue<int,vector<int> > pqMax; 

priority_queue<int,vector<int>,greater<int> > pqMin;

void insert(int x){
    if (pqMax.size() == pqMin.size()){
        if (pqMax.size()==0){
            pqMax.push(x);
            return;
        }
        if (x < pqMax.top()){
            pqMax.push(x);
        }
        else{
            pqMin.push(x);
        }
    }
    
    else{
        if (pqMax.size() < pqMin.size()){
            if (x <= pqMin.top()){
                pqMax.push(x);
            }
            else{
                int temp=pqMin.top();
                pqMin.pop();
                pqMax.push(temp);
                pqMin.push(x);
            }
        }
        else{
            if (x >= pqMax.top()){
                pqMin.push(x);
            }
            else{
                int temp=pqMax.top();
                pqMax.pop();
                pqMin.push(temp);
                pqMax.push(x);
            }
        }
    }
}

double findMedian(){
    if (pqMax.size() == pqMin.size()){
        return (pqMax.top() + pqMin.top())/2.0;
    }
    else if(pqMax.size() > pqMin.size()){
        return pqMax.top();
    }
    return pqMin.top();
}
int main(){
    int a[]={10,21,15,30,18};
    for(int i=0;i<5;i++){
        insert(a[i]);
        cout<<findMedian()<<endl;
    }
    // insert(10);
    // cout<<findMedian()<<endl;
    // insert(15);
    // cout<<findMedian()<<endl;
    // insert(21);
    // cout<<findMedian()<<endl;
    // insert(30);
    // cout<<findMedian()<<endl;
    // insert(18);
    // cout<<findMedian()<<endl;
    // insert(8);
    // cout<<findMedian()<<endl;
    // insert(7);
    // cout<<findMedian()<<endl;
}    