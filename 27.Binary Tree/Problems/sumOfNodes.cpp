//Calculate the sum of all nodes in a binary tree
#include<iostream>
#include<queue>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int sumOfNodes(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    
    return sumOfNodes(root->left)+sumOfNodes(root->right)+root->data;
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<sumOfNodes(root)<<endl; //28
    
    
}