// Circular linked lists

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

//Insertion in a circular linked list
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    node* temp=head;

    if (head==NULL){
        n->next = n;
        head = n;
        return;
    }

    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
    head=n;
}

void insertAtTail(node* &head, int val){
    if (head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    
    node* n= new node(val);
    node* temp=head;

    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
}

//Deletion in a circular linked list
void deleteAtHead(node* &head){
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int pos){
    if (pos==1)
    {
        deleteAtHead(head);
        return;
    }
    
    node* temp=head;
    int count=1;

    while (count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node* todelete= temp->next;
    temp->next = temp->next->next;
    
    delete todelete;
}

void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while (temp!=head);

    cout<<head->data<<"->..."<<endl;
}


int main(){
    node* head=NULL;
    int arr[]={5,3,2,4,6,7};
    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head,arr[i]);
    }
    insertAtHead(head,9);
    display(head);

    deletion(head,4);
    display(head);

    deleteAtHead(head);
    display(head);

}