#include<iostream>
// #include: Preprocessor directive used to include files (ex: we have different file for input & output, and so on)

//iostrteam: it is the header file for taking input and printing output. (cout & cin will only work when we have imported iostream file in our program). There are many header files for different purposes like math, stdlib, etc.

using namespace std;



int main()
// The execution of program begins from main() function. It is mandatory for any program.

{   int cost;
    cout<<"Enter cost of pen: ";
    cin>>cost;

    ////cin>> is used to take input

    cout<<"Cost of pen is: Rs."<<cost<<"\n";

    // cout<<"Hello World\n";

    // //cout<< is used to display output
    // //cin>> is used to take input
    // // \n adds line break
    // // ; marks the end of statement

    return 0;
    // exits status of a function(code written after it won't be executed)


    // cout<<"Hello World\n";
    // //won't be executed bcz it is after "return 0;"

}

//Curly braces {} indicate the start and end of the function.
