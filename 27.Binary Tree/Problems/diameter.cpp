//Calculate the diameter of a binary tree.(Number of nodes in the longest path between any two levels)
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
/* timeComplexity: O(n^2)
int height(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    
    return max(height(root->left),height(root->right))+1;
}

int diameter(Node* root){
    if (root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    int currDiameter=lh+rh+1;

    int ld=diameter(root->left);
    int rd=diameter(root->right);

    return max(currDiameter, max(ld,rd));
}*/

//Optimized approach: timeComplexity: O(n)
int diameter(Node* root, int *height){
    if (root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ld=diameter(root->left, &lh);
    int rd=diameter(root->right, &rh);
    int currDiameter=lh+rh+1;

    *height=max(lh,rh)+1;

    return max(currDiameter,max(ld,rd));
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    int height=0;
    cout<<diameter(root,&height)<<endl; //4
    
    
}