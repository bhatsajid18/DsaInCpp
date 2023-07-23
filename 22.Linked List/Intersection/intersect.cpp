// find the intersection point of two linked lists

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

void makeIntersection(node* &head1, node* &head2, int pos){
    node* temp1=head1;
    pos--;
    while (pos--)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    
    while (temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int intersection(node* &head1, node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int d, count=1;
    node* ptr1;
    node* ptr2;
    if (l1>l2)//we will point ptr1 to the linked list with more length
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    
    while (d)
    {
        ptr1=ptr1->next;
        if (ptr1==NULL){
            return -1;
        }
        d--;
    }
    
    while (ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    
    return -1;
}

void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    // node* head=NULL;
    // insertAtHead(head,1);
    // insertAtHead(head,2);
    // insertAtHead(head,3);
    // insertAtHead(head,4);
    // insertAtHead(head,5);
    // insertAtHead(head,6);
    // display(head);

    node* head1=NULL;
    node* head2=NULL;
    insertAtHead(head1,1);
    insertAtHead(head1,2);
    insertAtHead(head1,3);
    insertAtHead(head1,4);
    insertAtHead(head1,5);
    insertAtHead(head1,6);

    insertAtHead(head2,7);
    insertAtHead(head2,8);
    insertAtHead(head2,9);
   
    display(head1);
    display(head2);

    makeIntersection(head1,head2,1);
    cout<<intersection(head1,head2)<<endl; //value (data) of intersection node

}