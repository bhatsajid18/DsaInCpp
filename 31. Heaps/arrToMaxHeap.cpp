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

Node* insertLevelOrder(int arr[],Node* root, int i,int n){
    if (i < n){
        Node* temp = new Node(arr[i]);
        root = temp;

        root->left=insertLevelOrder(arr,root->left, 2*i+1, n);

        root->right=insertLevelOrder(arr,root->right, 2*i+2, n);
    }
    return root;
}

void restoreHeap(Node* root){
    if (root==NULL){
        return;
    }
    int s=0;
    do{
        if (s!=0)
            s=0;
            
        restoreHeap(root->left);
        restoreHeap(root->right);

        
        if (root->left && root->right){
            if(root->data < root->left->data || root->data < root->right->data){
                if (root->left->data > root->right->data){
                    swap(root->data,root->left->data);
                    s++;
                }
                else{
                    swap(root->data,root->right->data);
                    s++;
                }
            }
        }
        else if(root->left){
            if (root->left->data > root->data){
                swap(root->data,root->left->data);
                s++;
            }
        }
        else if(root->right){
            if (root->right->data > root->data){
                swap(root->data,root->right->data);
                s++;
            }
        }

    }while (s!=0);
    
    
}

void inorder(Node* root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int arr[]={10,15,21,30,18,9};
    
    Node* root = insertLevelOrder(arr,NULL,0,6);
    inorder(root);
    cout<<endl;

    restoreHeap(root);
    inorder(root);
    cout<<endl;
}