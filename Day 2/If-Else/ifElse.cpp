#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any number:\n";
    cin>>a;
    if (a<0){
        cout<<a<<" is negative.\n";
    }
    else if(a>0){
        cout<<a<<" is posivtive.\n";
    }
    else{
        cout<<"Number entered is zero.\n";
    }
    
    return 0;
}

/*
it is conditional statement: if condition is satisfied, one code is executed, and if not, then other code is executed.
Syntax:
if(condition){
    //some statements.
}
else if(other condition{
    //other statements.
}
else{
    //some other statements.
}
*/

// Nested if-else: if else within if else is called nested if else