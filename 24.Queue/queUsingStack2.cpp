//Approach 2: Using Function Call Stack
#include<iostream>
#include<stack>
using namespace std;
class que{
    stack<int> s1;
public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if (s1.empty())
        {
            cout<<"Queue is empty.\n";
            return -1;
        }
        int res=s1.top();
        s1.pop();
        if (s1.empty())
        {
            return res;
        }
        int item=pop();
        s1.push(res);
        return item;
    }
};

int main(){
    que obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    cout<<obj.pop()<<endl; //1 returns popped item
    cout<<obj.pop()<<endl; //2
    cout<<obj.pop()<<endl; //3
    cout<<obj.pop()<<endl; //4
    obj.pop(); //Queue is empty.
    
}