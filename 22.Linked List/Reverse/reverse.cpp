#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}


void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

//iterative method
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nxtptr;

    while (currptr!=NULL)
    {
        nxtptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nxtptr;
    }
    return prevptr;
}

//recursive method
node* reverseRecursive(node* &head){
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    

    node* newHead= reverseRecursive(head->next);

    head->next->next=head;
    head->next=NULL;

    return newHead;
}

//reverse K nodes in a linked list
node* reverseK(node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nxtptr;

    int count=0;
    while (currptr!=NULL && count<k)
    {
        nxtptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nxtptr;
        count++;
    }
    
    if (nxtptr!=NULL)
    {
        head->next=reverseK(nxtptr,k);    
    }

    return prevptr; //prevptr will be new head
}

int main(){
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);
    
    // node* newHead=reverse(head);
    // display(newHead);

    // node* newHead1=reverseRecursive(head);
    // display(newHead1);

    int k=2;
    display(reverseK(head,k));
    
}