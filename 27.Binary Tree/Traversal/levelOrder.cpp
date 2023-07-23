//Level order traversal of binary tree


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

void lelelOrder(struct Node* root){
    if (root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* n=q.front();
        q.pop();
        if (n!=NULL){
            cout<<n->data<<" ";
            if (n->left!=NULL){
                q.push(n->left);
            }
            if (n->right!=NULL){
                q.push(n->right);
            }  
        }
        else if (!q.empty()){
            q.push(NULL);
        }   
    }
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    lelelOrder(root); //1 2 3 4 5 6 7
    cout<<endl;
    
    
}