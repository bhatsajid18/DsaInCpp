#include<iostream>
using namespace std;
//implementation
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

void insertAtTail(node* &head, int val){

    node* n=new node(val);

    if (head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=n;
    
}

int countNode(node* head){
    int n=0;
    while (head!=NULL)
    {
        n++;
        head=head->next;
    }
    return n;
}

void display(node* head){ //same code is for traversing
    // node* temp=head;
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int findNode(node* head,int x){
    int pos=1;
    while (head!=NULL)
    {
        if (head->data==x)
        {
            return pos;
        }
        pos++;
        head=head->next;
    }
    return 0;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);
    cout<<countNode(head)<<endl;//6

    int x=findNode(head,4);
    if (x==0)
    {
        cout<<"Element is not present";
    }
    else{
        cout<<"Element is present at position "<<x<<endl;
    }
    
}