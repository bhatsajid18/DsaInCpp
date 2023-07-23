//Sum replacement: Replace each node with the sum of all subtree nodes and itself.

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

void sumReplacement(Node* root){
    if (root==NULL){    
        return;
    }
    sumReplacement(root->left);
    sumReplacement(root->right);

    if (root->left!=NULL){
        root->data += root->left->data;
    }
    if (root->right!=NULL){
        root->data += root->right->data;
    }
    
}

void preOrder(Node* root){
    if (root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    struct Node* root=new Node(5);

    root->left=new Node(6);
    root->right=new Node(3);

    root->left->left=new Node(9);
    root->left->right=new Node(1);
    root->right->left=new Node(2);
    root->right->right=new Node(1);

    root->left->right->left=new Node(2);
    root->right->left->right=new Node(6);

    root->left->right->left->left=new Node(3);
    root->left->right->left->right=new Node(5);
    root->right->left->right->right=new Node(7);

    /*
             5          level: 0
           /   \        
          6     3       level: 1 
         / \   / \      
        9   1 2   1     level: 2
           /   \        
          2     6       level: 3 
         / \     \
        3   5     7     level: 4
    */
   sumReplacement(root);

   preOrder(root);
}