// Postfix evaluation of expression

#include<iostream>
#include<stack>
#include<math.h>
#include<string>
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;

    for (int i = 0; i < s.length(); i++){
        if (s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}

int main(){
    string s="46+2/5*7+";
    cout<<postfixEvaluation(s)<<endl;//32
    cout<<postfixEvaluation("42*3+")<<endl;//11
    cout<<postfixEvaluation("53^3+")<<endl;//128
    return 0;
}