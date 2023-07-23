// Append last K nodes of linkded list to the start of the linked list

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

int length(node* &head){
    int l=0;
    node* temp =head;
    while (temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

node* appendK(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail=head;
    
    int l=length(head);
    k=k%l; //incase k>l
    int count=1;
    while (tail->next!=NULL)
    {
        if(count==l-k){
            newTail=tail;
        }
        if (count==l-k+1)
        {
            newHead=tail;
        }

        count++;
        tail=tail->next;
    }
    
    newTail->next=NULL;
    tail->next=head;

    return newHead;
}


/*        //OR
node* appendK(node* &head,int k){
    node* temp=head;
    int l=length(head);
    int count=1;
    while (count!=l-k)
    {
        count++;
        temp=temp->next;
    }
    node* newHead=temp->next;
    temp->next=NULL;
    node* temp1=newHead;
    while (temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=head;
    return newHead;
    
}*/


void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
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

    node* newHead=appendK(head,3);
    display(newHead);
}