//Build BST from sorted array.
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

Node* buildBstFromSorted(int arr[],int st, int end){
    if (st>end){
        return NULL;
    }
    
    int mid=(st+end)/2;

    Node* root=new Node(arr[mid]);

    root->left=buildBstFromSorted(arr,st,mid-1);
    root->right=buildBstFromSorted(arr,mid+1,end);

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
    int arr[]={4,5,6,7,8,9};
    Node* root=buildBstFromSorted(arr,0 ,5);

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