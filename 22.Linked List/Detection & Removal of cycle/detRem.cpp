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

void makeCycle(node* &head, int pos){
    node* temp=head;
    node* startNode;

    int count=1;
    while (temp->next!=NULL)
    {
        
        if (count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* &head){
    node* slow=head;  //slow-->tortise
    node* fast=head;  //fast-->heer

    while (fast!=NULL && fast->next!=NULL) //if node is present then 'if' condition is satisfied and loop execution stops. If not present, then last node's next will be NULL, so we'll apply the condition accordingly. Condition is checked for "fast" as it will reach the NULL (if present) first. 
    {
        slow=slow->next;
        fast=fast->next->next;

        if (fast==slow)
        {
            return true;
        }
    }
    return false;
    
}

void removeCycle(node* &head){ //assuming cycle is present
    node* slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    
    fast=head;
    while (slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    
    slow->next=NULL;
}

void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"     ";
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
    insertAtHead(head,6);
    insertAtHead(head,7);
    display(head);

    makeCycle(head,3);
    // display(head); //it will print repeated the cycle nodes

    cout<<detectCycle(head)<<endl; //1-->true

    removeCycle(head);

    cout<<detectCycle(head)<<endl; //0-->false

    display(head); //original linked list
}