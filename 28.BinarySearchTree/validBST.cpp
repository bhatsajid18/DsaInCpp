//Check if the given BST is valid or not
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
// 1
// bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
//     if (root==NULL){
//         return true;
//     }
//     if (min!=NULL && root->data <= min->data){
//         return false;
//     }
//     if (max!=NULL && root->data >= max->data){
//         return false;
//     }
//     bool leftBST= isBST(root->left, min, root);
//     bool rightBST= isBST(root->right, root, max);

//     return leftBST && rightBST;
// }

//2
bool isBST(Node* root, int min=INT_MIN, int max=INT_MAX){
    if (root==NULL){
        return true;
    }
    if (root->data <= min || root->data>=max){
        return false;
    }
    bool leftBST= isBST(root->left, min, root->data);
    bool rightBST= isBST(root->right, root->data, max);

    return leftBST && rightBST;
}

int main(){
    Node* root = new Node(7);
    root->left = new Node(5);
    root->right = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->right = new Node(9);

   /*
          7
         / \
        5   8
       / \   \
      4   6   9    
   */
//   if (isBST(root, NULL, NULL)){ //1
//         cout<<"Valid BST.\n";
//     }
//     else{
//         cout<<"Invalid BST.\n";
//   }

  if (isBST(root, INT_MIN, INT_MAX)){ //2
        cout<<"Valid BST.\n";
    }
    else{
        cout<<"Invalid BST.\n";
  }

    Node* root1 = new Node(7);
    root1->left = new Node(5);
    root1->right = new Node(8);
    root1->left->left = new Node(10);
    root1->left->right = new Node(6);
    root1->right->right = new Node(9);

   /*
          7
         / \
        5   8
      /  \   \
     10   6   9    
   */

    // if (isBST(root1, NULL, NULL)){ //1
    //     cout<<"Valid BST.\n";
    // }
    // else{
    //     cout<<"Invalid BST.\n";
    // }

    if (isBST(root1, INT_MIN, INT_MAX)){//2
        cout<<"Valid BST.\n";
    }
    else{
        cout<<"Invalid BST.\n";
    }
    
}