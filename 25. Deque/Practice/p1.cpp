// Redundant Braces in an expression

#include<iostream>
#include<stack>
using namespace std;
bool redundantBraces(string s){
    bool ans=false;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='(' || s[i]=='/' || s[i]=='*' || s[i]=='-' || s[i]=='+')
        {
            st.push(s[i]);
            continue;
        }
        if (s[i]==')')
        {
            if (st.top()=='(')
            {
                ans=true;
                break;
            }
            
            while (st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/')
            {
                st.pop();
            }
            st.pop();
        }
        
    }
    return ans;
}
int main(){
    string s="((a+b))";
    cout<<redundantBraces(s)<<endl;
    cout<<redundantBraces("((a+b)+c)")<<endl;
    cout<<redundantBraces("()")<<endl;
    
}