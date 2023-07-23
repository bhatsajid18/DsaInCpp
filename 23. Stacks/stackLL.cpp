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
    node(){

    }
};

//Linked list implementation
class stack:public node{
    public:
    void push(node* &head,int x){
        node* n=new node(x);  
        node* top=head;
        n->next=head;
        top=n;
        head=top;
    }

    void pop(node* &head){
        if (head==NULL){
            cout<<"No element to pop.\n";
            return;
        }
        
        node* top=head->next;
        delete head;
        head=top;
    }

    void Top(node* &head){
        if (head==NULL){
            cout<<"Empty stack.\n";
            return;
        }
        cout<<head->data<<endl;
    }

    bool empty(node* &head){
        return head==NULL;
    }
};

int main(){
    node* head=NULL;
    stack st;
    st.push(head,1);
    st.push(head,2);
    st.push(head,3);
    st.push(head,4);
    st.Top(head); //4

    st.pop(head);
    st.Top(head); //3

    st.pop(head);
    st.pop(head);
    st.pop(head); //Empty stack
    st.Top(head); //No element to pop.

    st.pop(head);

    cout<<st.empty(head)<<endl; //1-->true
}