//Calculate the height of a binary tree.(Number of levels)
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

int heightOfTree(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<heightOfTree(root)<<endl; //3
    
    
}