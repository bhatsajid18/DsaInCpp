//Flattena binary tree into linked list inplace.
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

void flatten(Node* root){
    if (root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if (root->left!=NULL){
        flatten(root->left);

        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;

        Node* tail=root->right; //originnaly root->left
        while (tail->right!=NULL){
            tail=tail->right;
        }
        tail->right=temp;
    }
    flatten(root->right);
}

void inOrderPrint(Node* root){
    if (root==NULL){
        return;
    }
    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    flatten(root);
    inOrderPrint(root);
    cout<<"\n";
}