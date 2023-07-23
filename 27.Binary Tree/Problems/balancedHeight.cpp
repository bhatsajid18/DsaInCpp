// Balanced height binary tree: For each node, difference b/w heights of left and right subtrees <=1
#include<iostream>
#include<queue>

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
/*
int heightOfTree(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;
}

bool isBalanced(Node* root){
    if (root==NULL)
    {
        return true;
    }
    if (!isBalanced(root->left))
    {
        return false;
    }
    
    if (!isBalanced(root->right))
    {
        return false;
    }
    
    int lH=heightOfTree(root->left);
    int rH=heightOfTree(root->right);

    return abs(lH-rH)<=1;
}
*/

//Optimised Approach

bool isBalanced(Node* root,int* height){
    if (root==NULL)
    {
        return true;
    }
    int lh=0,rh=0;
    if (!isBalanced(root->left, &lh))
    {
        return false;
    }
    
    if (!isBalanced(root->right, &rh))
    {
        return false;
    }
    
    *height=max(lh,rh)+1;

    return abs(lh-rh)<=1;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    int height=0;
    if(isBalanced(root, &height)){
        cout<<"Balanced.\n";
    }
    else
    {
        cout<<"Unbalanced.\n";
    } 
}