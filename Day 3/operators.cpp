#include<iostream>
using namespace std;

// operators are symbols that tell the compiler to perform some specific operations.

//Arithamtic operators:

//1. Binary operators: operate on two operands. (+, -, *, /, %, etc)

//2. Unary operator: operates on single operand.    
//     increment: ++ (pre and post)
//     decrement: -- (pre and post)



// Relational operators: defines a relation between two operands. (Returns a boolean value)
// ==, !=, >, >=, <, <=



//Logical operators: used to connect multiple conditions/expressions together or to reverse a logical value.
// && (is true if both are true else false), || (is false if both are false else true), ! (inverts true to false and vice-versa)


//Bitwise operators: operate on bits and perform bit-by-bit operations. 
// bitwise AND (&): returns 1 when both bits are 1, else 0.
// bitwise OR (|): returns 0 when both bits are 0, else 1.
// bitwise XOR (^): returns 0 when both bits are same (0 or 1), else 1.
// 1's complement (~): inverts each bit. (changes 1 to 0, and 0 to 1)
// left shift operator (<<): shifts bits in left direction. (4<<1: will shift binary bits of 4 to left by one step ,i.e., 0100 will change to 1000)
// a<<n --> a*2^n

// right shift operator (>>): shifts bits in right direction. (4>>2: will shift binary bits of 4 to right by two steps ,i.e., 0100 will change to 0001)
// a>>n --> a/2^n



// Assignment operator: assigns values to the left operand. (=, +=, -=, *=, /=, etc)



//Miscellaneous operators:
//1. sizeof(): returns size of a variable
//2. conditional operator(var1?var2:var3)
//3. cast: converts one data type to another.
//4. comma(,): causes a sequence of operations to be performed.



int main(){
    int a=5,b=3,c=7,d=9;

    //binary
    cout<<a+b<<endl; //8
    cout<<a-b<<endl; //2
    cout<<a*b<<endl; //15
    cout<<a/b<<endl; //1
    cout<<a%b<<endl; //2

    //unary
    cout<<a++<<endl; //5 ,a=6
    cout<<++b<<endl; //4 ,b=4
    cout<<c--<<endl; //7 ,c=6
    cout<<--d<<endl; //8 ,d=8

    // d=d++ * ++d; //80
    // cout<<d;


    //relational
    if(a==b){
        cout<<"true";
    }else{
        cout<<"false";
    }
    cout<<endl;

    //logical
    if(a==b || a==c){
        cout<<"true";
    }else{
        cout<<"false";
    }
    cout<<"\n"<<!6<<endl; //returns 0 if non-zero else returns 1

    if(!(a==b)){
        cout<<"true";
    }else{
        cout<<"false";
    }


    //cast
    char ch='a';
    cout<<int(ch); //97 (ASCII code of 'a')


    // // comma
    // a = (2,3,4);
    // cout<<a;
    
}