//Find the sum of nodes at Kth level

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

void sumAtK( Node* root,int k){
    int level=0,sum=0;
    if (root==NULL){
        cout<<"Empty Tree.\n";
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){   //or while(level<=k)
        Node* n=q.front();
        q.pop();
        if (n!=NULL){
            if (level==k){
                sum+=n->data;
            }
            if (n->left!=NULL){
                q.push(n->left);
            }
            if (n->right!=NULL){
                q.push(n->right);
            }  
        }
        else if (!q.empty()){
            level++;
            q.push(NULL);
        }   
    }
    cout<<sum<<endl;
}

int main(){
    struct Node* root=new Node(5);

    root->left=new Node(6);
    root->right=new Node(3);

    root->left->left=new Node(9);
    root->left->right=new Node(1);
    root->right->left=new Node(2);
    root->right->right=new Node(1);

    root->left->right->left=new Node(2);
    root->right->left->right=new Node(6);

    root->left->right->left->left=new Node(3);
    root->left->right->left->right=new Node(5);
    root->right->left->right->right=new Node(7);

    /*
             5          level: 0
           /   \        
          6     3       level: 1 
         / \   / \      
        9   1 2   1     level: 2
           /   \        
          2     6       level: 3 
         / \     \
        3   5     7     level: 4
    */

    sumAtK(root,3); //8 
}