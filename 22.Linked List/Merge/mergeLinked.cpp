// merge two sorted linked lists
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

//iterative method
node* merge(node* &head1, node* &head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummyNode=new node(-1);
    node* ptr3=dummyNode;

    while (ptr1!=NULL && ptr2!=NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    
    while (ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    
    while (ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    
    return dummyNode->next;
}

//recursive method
node* mergeRecursive(node* &head1, node* &head2){

    if (head1==NULL)
    {
        return head2;
    }
    if (head2==NULL)
    {
        return head1;
    }
    
    
    node* result;
    if (head1->data < head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else{
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    
    return result;
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
   

    node* head1=NULL;
    node* head2=NULL;
    insertAtHead(head1,6);
    insertAtHead(head1,5);
    insertAtHead(head1,4);
    insertAtHead(head1,1);

    insertAtHead(head2,9);
    insertAtHead(head2,7);
    insertAtHead(head2,3);
    insertAtHead(head2,2);
   
    display(head1);
    display(head2);

    // node* mergeHead = merge(head1,head2);
    node* mergeHead = mergeRecursive(head1,head2);
    display(mergeHead);
}