#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    priority_queue<int,vector<int> > heap;
    int arr[]={10,15,21,30,18,9};

    for (int i = 0; i < 6; i++){
        heap.push(arr[i]);
    }
    
    for (int i = 5; i >= 0; i--){
        arr[i]=heap.top();
        heap.pop();
    }

    for (int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}

