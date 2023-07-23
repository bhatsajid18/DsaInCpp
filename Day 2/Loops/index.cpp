#include<iostream>
using namespace std;

int main(){
    // printing "Hello World" 10 times.

    // //using for loop
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<"Hello World!\n";
    // }


    // //using while loop
    // int i=1; //initialization
    // while (i<=10) //condition
    // {
    //     cout<<"Hello World.\n";
    //     i++; //update
    // }
    
    // //do-while
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<0);
    // // Here 1 is printed even though condition is false.
    
}

// for loop:
// first variable in for loop is initialized, then condition is checked, if true loop is executed, and after execution variable is updated and then condition is again checked and this process is repeated until condition is false. At this time loop is stopped.

//syntax:
/* for(initialization, condition, update (inc or dec)){
    //body of loop
}*/



//while loop:
//works same as for loop

//syntax:
/*
initialization;
while(condition){
    //body
    //update (increment / decrement)
}
*/



// dowhile loop:
// the only difference b/w while and dowhile is that in do while loop is executed atleast once even if the starting condition is false. It is because here loop is first executed and condition is checked at the end.

//syntax:
/*
    do{
        //body
    }while(condition);
*/