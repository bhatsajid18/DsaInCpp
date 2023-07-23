// Circular Queue for array implementation

#include<iostream>
using namespace std;
#define n 5

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

    void push(int x){
        if (back==n-1){
            back=0;
            arr[back]=x;
            return;
        }
        back++;
        arr[back]=x;

        if (front==-1){
            front++;
        }   
    }

    void pop(){
        if (front==-1){
            cout<<"No element to dequeue.\n";
            return;
        }
        if (front==n-1)
        {
            front=0;
            return;
        }
        
        front++;
    }

    void display(){
        if (front==-1){
            cout<<"No element in queue.\n";
            return;
        }
        if (front<=back)
        {
            for (int i = front; i <= back; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
        else{
            for (int i = front; i <= n-1; i++)
            {
                cout<<arr[i]<<" ";
            }
            for (int i = 0; i <= back; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
        
    }
};

int main(){
    queue obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.display();
 
    obj.pop();
    obj.pop();
    obj.pop();
    obj.pop();

    obj.push(6);
    obj.push(6);
    obj.display();

    obj.pop();
}