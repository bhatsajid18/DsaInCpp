//Array implementation of queues
#include<iostream>
using namespace std;
#define n 20

class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int x){
        if (back==n-1){
            cout<<"Queue overflow.\n";
            return;
        }
        back++;
        arr[back]=x;

        if (front==-1){
            front++;
        }   
    }

    void dequeue(){
        if (front==-1 || front>back){
            cout<<"No element to dequeue.\n";
            return;
        }
        front++;
    }

    void peek(){
        if (front==-1 || front>back){
            cout<<"No element in queue.\n";
            return;
        }
        cout<<arr[front]<<endl;
    }

    bool empty(){
        return (front==-1 || front>back);
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