// Stack Implementation using Queue
//Method 2: Making pop method costly
#include<iostream>
#include<stack>
#include<queue>
using namespace std;


class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack(){
        N=0;
    }
    void push(int val){
        q1.push(val);
        N++;
    }

    void pop(){
        if (q1.empty())
        {
            cout<<"Empty Stack.\n";
            return;
        }
        while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        
        N--;
    }

    int top(){
        if (q1.empty())
        {
            cout<<"Empty Stack. ";
            return -1;
        }
        return q1.back();
    }

    int size(){
        return N;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl; //3
    s.pop();
    cout<<s.top()<<endl; //2
    s.pop();
    cout<<s.size()<<endl; //1
    s.pop();
    s.pop(); //Empty Stack.
    cout<<s.size()<<endl; //0
    cout<<s.top()<<endl; //Empty Stack -1
}