// Return roots of all possible BSTs for n (with keys from 1 to n) nodes
#include<iostream>
#include<vector>
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

vector<Node*> constructBST(int st, int end){
    vector<Node*> trees;
    if (st>end){
        trees.push_back(NULL);
        return trees;
    }
    

    for (int i = st; i <= end; i++){
        vector<Node*> constructLeftBST=constructBST(st,i-1);
        vector<Node*> constructRightBST=constructBST(i+1,end);

        for (int j = 0; j < constructLeftBST.size(); j++){
            Node* left=constructLeftBST[j];

            for (int k = 0; k < constructRightBST.size(); k++){
                Node* right=constructRightBST[k];

                Node* root=new Node(i);
                root->left=left;
                root->right=right;

                trees.push_back(root);
            } 
        }
    }
    return trees;
}

void printPreorder(Node* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    vector<Node*> totalTrees=constructBST(1,3);

    for (int i = 0; i < totalTrees.size(); i++){
        printPreorder(totalTrees[i]);
        cout<<endl;
    }
    
}