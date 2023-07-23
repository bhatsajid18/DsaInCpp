//Implementation
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int main(){
    Node* root=new Node(3);
    root->left=new Node(2);
    root->right=new Node(4);
    /*
        3
       / \
      2   4
    */
    root->left->left=new Node(1);
    root->right->right=new Node(5);
    /*
        3
       / \
      2   4
     /     \ 
    1       5
    */
}