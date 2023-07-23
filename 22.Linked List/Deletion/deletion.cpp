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

void deleteAtHead(node* &head){
    node* toDelete= head;
    head=head->next;
    delete toDelete;
}

void deletion(node* &head, int val){
    if (head==NULL)// linked list is empty
    {
        return;
    }
    if (head->next==NULL)// only one node is present
    {
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* toDelete=temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    display(head);

    deletion(head,3);
    deleteAtHead(head);
    cout<<"After deleting node:\n";
    display(head);
}