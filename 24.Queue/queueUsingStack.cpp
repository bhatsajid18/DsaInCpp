//Queue Implementation Using Stack
//Approach 1: Using 2 stacks
#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
    }

    void pop(){
        if (s1.empty() and s2.empty())
        {
            cout<<"Queue is empty.\n";
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
    }
    void top(){
        if (s1.empty() and s2.empty())
        {
            cout<<"Queue is empty.\n";
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout<<s2.top()<<endl;
    }

    bool empty(){
        return (s1.empty() && s2.empty());
    }
};

int main(){
    queue obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.top(); //1
    obj.pop();
    obj.top(); //2
    obj.pop();
    obj.top(); //3
    cout<<obj.empty()<<endl; //0
    obj.pop();
    obj.pop();
    obj.pop(); //Queue is empty
    cout<<obj.empty()<<endl; //1
}