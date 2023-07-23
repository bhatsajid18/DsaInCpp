// Right view of a binary tree: Right most elements at each level
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

//method 1
void rightView(Node* root){
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
            if (i==size-1){
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

//method 2
// void rightView(Node* root){
//     if (root==NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     Node* prev;
//     while (!q.empty()){
//         Node* n=q.front();
//         q.pop();
//         if (n){
//             if (n->left){
//                 q.push(n->left);
//             }
//             if (n->right){
//                 q.push(n->right);
//             }
//         }
//         else if (!q.empty()){
//             q.push(NULL);
//             cout<<prev->data<<" ";
//         }
//         else{
//             cout<<prev->data<<" ";
//         }
//         prev=n;
//     }  
// }

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    rightView(root);
    cout<<endl;
    
    
}