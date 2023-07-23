// Priority Queue
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    int prior;
    node* next;
    node(int val,int p){
        data=val;
        prior=p;
        next=NULL;
    }
};

class pQueue{
    node* front;
    public:
    pQueue(){
        front=NULL;
    }
    void push(int val,int p){
        node* n=new node(val,p);
        if (front==NULL){
            front=n;
            return;
        }
        if (front->next==NULL){
            if (front->prior <= n->prior){
                front->next=n;
            }
            else{
                n->next=front;
                front=n;
            }
            return;
        }
        if (front->prior > n->prior){
            n->next=front;
            front=n;
            return;
        }
        
        node* prevTemp=front;
        node* temp=front;
        while ((temp->prior <= n->prior) && (temp->next!=NULL)){
            prevTemp=temp;
            temp=temp->next;
        }
        if (temp->next==NULL && (temp->prior <= n->prior)){
            temp->next=n;
            return;
        }
        
        n->next=temp;
        prevTemp->next=n;
    }

    void pop(int p){
        if (front==NULL){
            cout<<"No element to pop.\n";
            return;
        }
        // if (front->next==NULL){
        //     if (front->prior==p)
        //     {
        //         node* todelete = front;
        //         front=NULL;
        //         delete todelete;
        //     }
        //     else{
        //         cout<<"No element is present with priority "<<p<<endl;
        //     }
        //     return;
        // }
        if (front->prior==p)
        {
            node* todelete=front;
            front=front->next;
            delete todelete;
            return;
        }
        
        node* prevTemp=front;
        node* temp=front;
        while ((temp->prior!=p) && (temp->next!=NULL))
        {
            prevTemp=temp;
            temp=temp->next;
        }
        if ((temp->next==NULL) && (temp->prior!=p)){
            cout<<"No element is present with priority "<<p<<endl;
            return;
        }
        node* todelete=temp;
        temp=temp->next;
        prevTemp->next=temp;
        delete todelete;
    }

    void display(){
        if (front==NULL)
        {
            cout<<"No element to display.\n";
            return;
        }
        node* temp=front;
        while (temp!=NULL)
        {
            cout<<temp->data<<"("<<temp->prior<<")\n";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    pQueue pq;
    pq.push(2,3);
    pq.push(9,2);
    pq.push(45,2);
    // pq.push(23,1);
    // pq.push(67,4);
    // pq.push(8,8);
    // pq.push(90,5);
    pq.display();

    // pq.pop(5);
    pq.pop(3);
    pq.pop(2);
    pq.pop(2);
    // pq.pop(1);
    // pq.pop(4);
    // pq.pop(8);

    pq.pop(3);
    pq.display();
}