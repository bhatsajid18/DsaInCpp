//Maximum possible sum path (linear path) in a binary tree
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

int maxPathSumUtil(Node* root,int &ans){
    if (root==NULL)
    {
        return 0;
    }
    int left=maxPathSumUtil(root->left,ans);
    int right=maxPathSumUtil(root->right,ans);

    int nodeMax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));

    ans=max(ans,nodeMax);

    int maxSinglePath=max(root->data,max(root->data+left,root->data+right));
    return maxSinglePath;
}

int maxPathSum(Node* root){
    int ans=INT_MIN;
    maxPathSumUtil(root,ans);
    return ans;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    cout<<maxPathSum(root)<<endl;
}