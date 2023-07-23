//Print vertical order of a binary tree
#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define vi vector<int>
class Node{
    public:
    int key;
    Node* left;
    Node* right;
    Node(int val){
        key=val;
        left=NULL;
        right=NULL;
    }
};

void getVerticalOrder(Node* root, int HD, map<int, vi> &m){
    if (root==NULL){
        return;
    }
    m[HD].push_back(root->key);
    getVerticalOrder(root->left, HD-1, m);
    getVerticalOrder(root->right, HD+1, m);
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(7);
    root->right=new Node(4);
    root->left->left=new Node(3);
    root->left->right=new Node(11);
    root->right->left=new Node(14);
    root->right->right=new Node(6);

    map<int,vi > m;
    int HD=0;

    getVerticalOrder(root,HD,m);

    map<int,vi> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        for (int i = 0; i < (it->second).size(); i++){
            cout <<(it->second)[i]<<" ";
        }
    }
    cout<<endl;
}