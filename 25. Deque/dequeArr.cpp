// Array implementation of Deque
#include<iostream>
using namespace std;
#define n 50

class deque{
    int* arr;
    int front;
    int back;
    public:
    deque(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push_back(int val){
        if (back==n-1)
        {
            cout<<"Deque overflow.\n";
            return;
        }
        
        back++;
        arr[back]=val;
        if (front==-1)
        {
            front++;
        }
    }

    void push_front(int val){
        if (back==n-1)
        {
            cout<<"Deque overflow.\n";
            return;
        }
        if (front==-1)
        {
            front++;
            back++;
            arr[front]=val;
            return;
        }
        for (int i = back+1; i >front ; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[front]=val;
        back++;
    }

    void pop_front(){
        if (front==-1 || front>back)
        {
            cout<<"Deque Underflow.\n";
            return;
        }
        front++;
    }

    void pop_back(){
        if (front==-1 || front>back)
        {
            cout<<"Deque Underflow.\n";
            return;
        }
        back--;
    }

    void display(){
        if (front==-1 || front>back)
        {
            cout<<"Deque Underflow.\n";
            return;
        }
        for (int i = front; i <= back; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
};

int main(){
    deque dq;
    dq.push_front(1);
    dq.push_front(3);
    dq.push_front(4);
    dq.push_back(6);
    dq.push_front(7); 
    dq.push_back(2); 
    dq.display();
    
    dq.pop_back();
    dq.pop_back();
    dq.push_back(8);
    dq.display();
}