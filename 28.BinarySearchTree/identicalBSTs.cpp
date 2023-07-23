//Check if the two BSTs are identical or not. (Structure is identical and corresponding node values are same)
#include<iostream>
#include<stack>
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

bool identical(Node* root1, Node* root2){
    if (root1==NULL && root2==NULL){
        return true;
    }
    if (root1==NULL || root2==NULL){
        return false;
    }
    
    bool cond1 = root1->data == root2->data;
    // if (root1->data == root2->data){
    //     cond1=true;
    // }
    // else{
    //     cond1=false;
    // }
    
    bool cond2=identical(root1->left, root2->left);
    bool cond3=identical(root1->right, root2->right);

    return cond1&&cond2&&cond3;
    
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
    Node* root = new Node(7);
    root->left = new Node(5);
    root->right = new Node(8);
    
    Node* root1 = new Node(7);
    root1->left = new Node(8);
    root1->right = new Node(8);
    

    // zigzag(root);
    cout<<identical(root1, root)<<endl;
    cout<<identical(root1, root1)<<endl;
    cout<<identical(root, root1)<<endl;
    cout<<identical(root, root)<<endl;

   /*
        root       root1
          7          7
         / \        / \
        5   8      8   8
   */

}