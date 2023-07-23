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

Node* constructBST(int preorder[], int* preorderIdx, int key, int min, int max, int n){
    if (*preorderIdx>=n){
        return NULL;
    }
    
    Node* root=NULL;
    if (key > min && key < max){
        root = new Node(key);
        *preorderIdx = *preorderIdx+1;

        if (*preorderIdx < n)
        {
            root->left = constructBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
        }
        if (*preorderIdx < n)
        {
            root->right = constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
        }
        
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
   int preorder[]={7,5,4,6,8,9};
   int n=6;
   int preorderIdx=0;

   Node* root = constructBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,n);
   printInorder(root);
   cout<<endl;
   /*
          7
         / \
        5   8
       / \   \
      4   6   9    
   */

}