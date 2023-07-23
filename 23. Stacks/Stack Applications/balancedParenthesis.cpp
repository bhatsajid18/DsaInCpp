// {([])} --> balanced parenthesis
// {[()}] --> unbalanced parenthesis

#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isvalid(string s){
    bool ans=true;
    stack<char> st;
    for (int i = 0; i < s.length(); i++){
        if (s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
            continue;
        }
        if ((s[i]==')' || s[i]=='}' || s[i]==']') && st.empty()){
            ans=false;
            break;
        }
        if ((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')){
            st.pop();
        }
        else{
            ans=false;
            break;
        }
    }
    if (!st.empty()){
        ans=false;
    }
    
    return ans;
}

int main(){
    string s;
    cin>>s;
    if (isvalid(s)){
        cout<<"Balanced Parenthesis.\n";
    }
    else{
        cout<<"Unbalanced Parenthesis.\n";
    }
    
    // cout<<isvalid("{([])})")<<endl; //0
    // cout<<isvalid("{[(}])")<<endl; //0
    // cout<<isvalid("(}")<<endl; //0
    // cout<<isvalid("{[()]}")<<endl; //1
}