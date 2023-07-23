// Function is a piece of code that performs a specific task. 

//syntax:
/*
    returnType functionName(parameter1, parameter2,....){   //parameters are specified along with their data types.
        //function body
    }
*/

//Any function can be called in any other function
//Example: function to add two numbers.

#include<iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}

int add(int num1, int num2){
    print(num1);
    print(num2);
    int sum = num1 + num2;
    return sum;
}

int main(){
    int a=6,b=9;
    cout<<add(a,b)<<endl; //15
    return 0;
}