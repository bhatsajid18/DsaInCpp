//Linked List implementation of queues
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
    // node(){} //default constructor
};

class queue{
    node* front;
    node* back;

    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void enqueue(int x){
        node* n=new node(x);
        
        if (front==NULL)
        {
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void dequeue(){
        if (front==NULL){
            cout<<"Queue underflow.\n";
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }

    void peek(){
        if (front==NULL){
            cout<<"No element in queue.\n";
            return;
        }
        cout<<front->data<<endl;
    }

    bool empty(){
        return front == NULL;
    }
};

int main(){
    queue obj;
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);

    obj.peek(); //1
    obj.dequeue();

    obj.peek(); //2
    obj.dequeue();

    cout<<obj.empty()<<endl;//0-->false
    obj.dequeue();

    obj.peek(); //No element to dequeue.

    cout<<obj.empty()<<endl; //1-->true
}