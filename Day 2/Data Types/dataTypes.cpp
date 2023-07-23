#include<iostream>
using namespace std;
int main(){
    int a;//variable declaration
    a = 12;//initialization

    cout<<"Size of int: "<<sizeof(a); // 4 



    float b;
    cout<<"\nSize of float: "<<sizeof(b); // 4 


    char c;
    cout<<"\nSize of char: "<<sizeof(c)<<endl; // 1 


    bool d;
    cout<<"Size of bool: "<<sizeof(d)<<endl; // 1


}

// int: it takes 4 bytes of memory( i.e., int occupies 4x8=32 bits of memory).
// Range(unsigned)= 0 to 2^32 - 1
// Range(signed)= MSB is used for sign( 1 for -ve & 0 for +ve). Remaining are 31 bits, so range is ( -2^31 to 2^31 - 1 )




// float: size = 4 bytes (upto 7 decimal digits)

// if more than 7 decimal digits, 'double' is used. Its size is 8 bytes and upto 15 decimmal digits can be stored here.



// char (character): size = 1 byte (stores characters on basis of ASCII Codes)



// bool (boolean): size = 1 byte. It stores two values, either 0 or 1 (0 for false & 1 for true). 