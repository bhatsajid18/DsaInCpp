//Zigzag traversal of BST: Alternately traverse levels from left to right and from right to left.
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

void zigzag(Node* root){
    if (root==NULL){
        return;
    }

    stack<Node*> currLevel, nextLevel;
    bool leftToRight=true;
    currLevel.push(root);

    while (!currLevel.empty()){
        Node* temp=currLevel.top();
        currLevel.pop();

        if (temp!=NULL){
            cout<<temp->data<<" ";

            if (leftToRight){
                if (temp->left){
                    nextLevel.push(temp->left);
                }
                if (temp->right){
                    nextLevel.push(temp->right);
                }
            }
            else{
                if (temp->right){
                    nextLevel.push(temp->right);
                }
                if (temp->left){
                    nextLevel.push(temp->left);
                }
            }
        
        }   
            if (currLevel.empty()){
                leftToRight = !leftToRight;
                swap(currLevel, nextLevel);
            }
    }
    
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
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->right = new Node(9);

    zigzag(root);
    cout<<endl;
   /*
          7
         / \
        5   8
       / \   \
      4   6   9    
   */

}