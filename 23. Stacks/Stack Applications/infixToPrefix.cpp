// Infix to Prefix

#include<iostream>
#include<stack>
#include<math.h>
#include<string>
using namespace std;

string rev(string s){
    string reverse="";
    for (int i = s.length()-1; i >= 0; i--)
    {
        if (s[i]=='('){
            reverse+=')';
        }
        else if (s[i]==')'){
            reverse+='(';
        }
        else{
            reverse+=s[i];
        }
    }
    return reverse;
}

int precedence(char c){
    if (c=='^'){
        return 3;
    }
    else if (c=='*' || c=='/'){
        return 2;
    }
    else if (c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }   
}

string infixToPrefix(string s){
    stack<char> st;
    s=rev(s);
    string res="";

    for (int i = 0; i < s.length(); i++){
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if (s[i]=='(')
        {
            st.push(s[i]);
        }
        else if (s[i]==')')
        {
            while (!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else{
            while (!st.empty() && (precedence(s[i]) < precedence(st.top())))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    
    return rev(res);
}

int main(){
    string s="(a-b/c)*(a/k-l)";
    cout<<infixToPrefix(s)<<endl;
    cout<<infixToPrefix("a-b/c+d")<<endl;
}