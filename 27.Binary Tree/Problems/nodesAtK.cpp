//Nodes at distance K from a particular node in a binary tree
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

// case1
void subtreeNodes(Node* root, int k){
    if (root==NULL || k<0)
    {
        return;
    }
    if (k==0)
    {
        cout<<root->data<<" ";
        return;
    }
    subtreeNodes(root->left,k-1);
    subtreeNodes(root->right,k-1);
}

// case2
int allNodesAtk(Node* root, Node* target, int k){
    if (root==NULL)
    {
        return -1;
    }
    if (root==target)
    {
        subtreeNodes(root,k);
        return 0;
    }
    //dl-->left distance  and  dr-->right distance
    int dl=allNodesAtk(root->left,target,k);
    if (dl!=-1){
        if (dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            subtreeNodes(root->right,k-dl-2); //case1 included
        }
        return 1+dl;
    }

    int dr=allNodesAtk(root->right,target,k);
    if (dr!=-1){
        if (dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            subtreeNodes(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    allNodesAtk(root,root->right,2);
    cout<<endl;
}