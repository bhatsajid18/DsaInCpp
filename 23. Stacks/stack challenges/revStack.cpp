//Reverse a stack (not using extra stack)
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int topElem){

    if (st.empty())
    {
        st.push(topElem);
        return;
    }
    
    int topelm=st.top();
    st.pop();
    insertAtBottom(st,topElem);

    st.push(topelm);
}

void reverseStack(stack<int> &st){
    if (st.empty())
    {
        return;
    }
    
    int topElem = st.top();
    st.pop();

    reverseStack(st);
    insertAtBottom(st, topElem);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl;//5
    reverseStack(st);

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    
}