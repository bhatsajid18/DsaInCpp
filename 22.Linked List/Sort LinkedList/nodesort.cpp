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

node *sortNode(node *start){
    node *tempOut, *tempIn, *prev = NULL, *swap;
    tempOut = start;
    while (1){
        bool swapped = false;
        while (tempOut->next != NULL){
            tempIn = tempOut->next;
            if (tempOut->data > tempIn->data){
                swapped = true;
                if (tempOut == start){
                    tempOut->next = tempIn->next;
                    tempIn->next = tempOut;
                    start = tempIn;
                }
                else{
                    prev->next = tempIn;
                    tempOut->next = tempIn->next;
                    tempIn->next = tempOut;
                }
                swap = tempIn;
                tempIn = tempOut;
                tempOut = swap;
            }
            prev = tempOut;
            tempOut = tempOut->next;
        }
        tempOut = start;
        if (swapped == 0){
            break;
        }
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
    start = sortNode(start);
    display(start);
    return 0;
}