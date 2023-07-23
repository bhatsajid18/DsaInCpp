#include<iostream>
using namespace std;
#define n 100

//Array implementation
class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top=-1;
    }

    void push(int x){
        if (top==n-1){
            cout<<"Stack overflow";
            return;
        }
        top++;
        arr[top]=x;   
    }

    void pop(){
        if (top==-1){
            cout<<"No element to pop\n";
            return;
        }
        top--;
    }

    int Top(){
        if (top==-1){
            cout<<"Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl; //4

    st.pop();
    cout<<st.Top()<<endl; //3

    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl; //Stack is empty -1

    st.pop();

    cout<<st.empty()<<endl; //1-->true
}