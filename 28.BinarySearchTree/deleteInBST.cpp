//Delete a key from a BST such that properties of remaining BST remain intact.
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

Node* insert(Node* root, int val){
    if (root==NULL){
        return new Node(val);
    }
    if (root->data > val){
        root->left= insert(root->left, val);
    }
    else{
        root->right= insert(root->right, val);
    }
    return root;
}

Node* inorderSuccesor(Node* root){
    Node* curr= root;
    while (curr && curr->left)
    {
        curr=curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root, int key){
    if (key < root->data){
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        //cases 1&2
        if (root->left == NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        //case 3
        Node* temp=inorderSuccesor(root->right);
        int t=root->data;
        root->data=temp->data;
        temp->data=t; //swapping
        root->right=deleteInBST(root->right, temp->data);
    }
    return root;
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
   Node* root=NULL;
   int arr[]={5,1,3,4,2,7};
   root= insert(root,5);

   for (int i = 1; i < 6; i++)
   {
        insert(root,arr[i]);
   }
   printInorder(root);
   cout<<endl;
   deleteInBST(root,2);
   printInorder(root);
   cout<<endl;

}