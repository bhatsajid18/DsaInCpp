#include<iostream>
using namespace std;

//Implementation of double linked list
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if (head!=NULL)
    {
        head->prev=n;
    }
    
    head=n;
}

void insertAtTail(node* &head, int val){

    if (head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    
    node* n=new node(val);
    node* temp=head;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head,int pos){
    if (pos==1) //if the deleted node is at the start
    {
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    int count=1;

    while (temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    
    temp->prev->next=temp->next;

    if (temp->next!=NULL) //if the deleted node is at the end, this statement won't be executed because prev of temp->next won't be defined
    {
        temp->next->prev=temp->prev;
    }
    

    delete temp;
}

void display(node* head){
    node* temp = head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);

    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);

    deletion(head,3);
    display(head);

    deleteAtHead(head);
    display(head);
}