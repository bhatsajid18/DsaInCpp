//  Linked List implementation of Circular Queue

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

class queue{
    node* front;
    node* back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }

    void push(int val){
        node* n= new node(val);
        if (front==NULL)
        {
            n->next=n;
            front=n;
            back=n;
            return;
        }
        
        back->next=n;
        n->next=front; 
        back=n;
    }

    void pop(){
        if (front==NULL)
        {
            cout<<"No element to pop.\n";
            return;
        }
        if (front->next==front)
        {
            node* todelete=front;
            front=NULL;
            delete todelete;
            return;
        }
        
        node* todelete=front;
        front=front->next;
        back->next=front;
        delete todelete;
    }

    void display(){
        if (front==NULL)
        {
            cout<<"No element to display.\n";
            return;
        }
        node* temp=front;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while (temp!=front);

        cout<<endl;
    }
};


int main(){
    queue q;
    q.push(1);
    // q.push(2);
    q.push(3);
    q.display();
    q.pop();
    q.push(5);
    q.display();

}