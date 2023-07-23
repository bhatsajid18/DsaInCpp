// Finding Lowest Common Ancestor of any two nodes. (Brute Force Approach)
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

bool getpath(Node* root, int key, vector<int> &path){
    if (root==NULL){
        return false;
    }
    path.push_back(root->data);

    if (root->data==key){
        return true;
    }
    

    if (getpath(root->left,key,path) || getpath(root->right,key,path)){
        return true;
    }
    
    path.pop_back();
    return false;
}

int LCA(Node* root, int n1, int n2){
    vector<int> path1, path2;
    
    if (!getpath(root,n1,path1) || !getpath(root,n2,path2)){
        return -1; //Assuming no -ve value is in our tree
    }
    
    int pc;
    for (pc = 0; pc < path1.size() && pc<path2.size(); pc++){
        if (path1[pc]!=path2[pc]){
            break;
        }   
    }
    return path1[pc-1];
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    cout<<LCA(root,4,7)<<endl;
}