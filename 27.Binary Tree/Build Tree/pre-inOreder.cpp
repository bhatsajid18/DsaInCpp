//Build binary tree from preorder and inorder
#include<iostream>
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

int search(int inorder[],int start,int end,int curr){
    for (int i = start; i <= end; i++){
        if (inorder[i]==curr){
            return i;
        }     
    }
    return -1;
}

Node* build(int preorder[],int inorder[],int start, int end){
    //start and end are of inorder array
    static int idx=0;
    if (start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* n=new Node(curr);

    if (start==end){
        return n;
    }
    
    int pos=search(inorder,start,end,curr);

    n->left=build(preorder,inorder,start,pos-1);
    n->right=build(preorder,inorder,pos+1,end);

    return n;
}

void inOrderPrint(struct Node* root){
    if (root==NULL){
        return;
    }
    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
}

int main(){
    int preorder[]={1,2,4,5,3,6,7};
    int inorder[]={4,2,5,1,6,3,7};

    Node* root=build(preorder,inorder,0,6);

    inOrderPrint(root);
    cout<<endl;
}