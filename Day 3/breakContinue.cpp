#include<iostream>
using namespace std;



// break & continue: used to control the flow of loops on meeting some specified condition

// continue: whenever it appears in the loop, the compiler jumps to the next iteration and skips the staements appearing after "continue;" in the ongoing iteration. ( it is used to skip to the next iteration)

// break: whenever it appears in the loop / switch, compiler jumps out of the loop. ( it is used to terminate the loop)


// Example: 

int main(){
    int money=3000;
    for (int date = 1; date <= 30; date++)
    {
        if(date%2==0){
            continue;
        }
        cout<<"Go out today!";

        money = money - 300;
        if (money==0)
        {
            break;
        }
        
    }
    
}