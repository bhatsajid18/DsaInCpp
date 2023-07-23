// Linked List implementation of Deque
#include<iostream>
using namespace std;

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

class deque{
    node* front;
    node* back;
    public:
    deque(){
        front=NULL;
        back=NULL;
    }
    void push_back(int val){
        node* n=new node(val);
        if (front==NULL)
        {
            front=n;
            back=n;
            return;
        }
        back->next=n;
        n->prev=back;
        back=n;
    }

    void push_front(int val){
        node* n=new node(val);
        if (front==NULL)
        {
            front=n;
            back=n;
            return;
        }
        front->prev=n;
        n->next=front;
        front=n;
    }

    void pop_front(){
        if (front==NULL)
        {
            cout<<"Deque Underflow.\n";
            return;
        }
        node* todelete=front;
        front=front->next;
        front->prev=NULL;
        delete todelete;
    }

    void pop_back(){
        if (front==NULL)
        {
            cout<<"Deque Underflow.\n";
            return;
        }
        node* todelete=back;
        back=back->prev;
        back->next=NULL;
        delete todelete;
    }

    void display(){
        if (front==NULL)
        {
            cout<<"Deque Underflow.\n";
            return;
        }
        node* temp=front;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
        
    }
};

int main(){
    deque dq;
    dq.push_front(1); // 1 
    dq.push_back(2); // 1 2
    dq.push_front(3); // 3 1 2
    dq.push_front(4);
    dq.push_back(6);
    dq.push_front(7); 
    dq.display();
    
    dq.pop_back();
    dq.pop_back();
    dq.display();
}