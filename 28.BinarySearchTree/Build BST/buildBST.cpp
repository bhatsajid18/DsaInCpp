//Build a Binary Search Tree (BST) from an array
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

Node* insert(Node* root, int val){
    if (root==NULL)
    {
        return new Node(val);
    }
    if (root->data > val)
    {
        root->left= insert(root->left, val);
    }
    else{
        root->right= insert(root->right, val);
    }
    return root;
}

void printInorder(Node* root){
    if (root==NULL)
    {
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
   Node* root=NULL;
   int arr[]={5,1,3,4,2,7};
   root= insert(root,5);

   for (int i = 1; i < 6; i++)
   {
        insert(root,arr[i]);
   }
   printInorder(root);
   cout<<endl;

}