// Left view of a binary tree: Left most elements at each level
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

void leftView(Node* root){
    if (root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()){
        int size=q.size();
        for (int i = 0; i < size; i++){
            Node* n=q.front();
            q.pop();
            if (i==0){
                cout<<n->data<<" ";
            }
            if (n->left){
                q.push(n->left);
            }
            if (n->right){
                q.push(n->right);
            }   
        }
    }  
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    leftView(root);
    cout<<endl;
    
    
}