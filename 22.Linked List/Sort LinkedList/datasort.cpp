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



node *insertAtTail(node *start, int data){
    node *newNode, *temp;
    temp = start;
    newNode = new node(data);
    if (temp == NULL){
        start = newNode;
    }
    else{
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return start;
}

node *sortData(node *start){
    node *tempOut, *tempIn;
    tempOut = start;
    while (tempOut->next != NULL){
        tempIn = tempOut->next;
        while (tempIn != NULL){
            if (tempOut->data > tempIn->data){
                int temp = tempOut->data;
                tempOut->data = tempIn->data;
                tempIn->data = temp;
            }
            tempIn = tempIn->next;
        }
        tempOut = tempOut->next;
    }
    return start;
}

void display(node *start){
    node *temp = start;
    while (temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node *start = NULL;
    start = insertAtTail(start, 11);
    start = insertAtTail(start, 12);
    start = insertAtTail(start, 9);
    start = insertAtTail(start, 15);
    start = insertAtTail(start, 8);
    start = insertAtTail(start, 7);
    display(start);
    start = sortData(start);
    display(start);
    return 0;
}