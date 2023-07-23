//Optimized Approach
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

Node* LCA(Node* root, int n1, int n2){
    if (root==NULL){
        return NULL;
    }
    if (root->data==n1 || root->data==n2)
    {
        return root;
    }
    Node* left=LCA(root->left,n1,n2);
    Node* right=LCA(root->right,n1,n2);

    if (left!=NULL && right!=NULL){ //one value exists in left path and other in right path, in this case lca=root
        return root;
    }
    if (left!=NULL){
        return left;
    }
    if (right!=NULL){
        return right;
    }
    return NULL;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    Node* lca=LCA(root,6,7);
    cout<<lca->data<<endl;
}