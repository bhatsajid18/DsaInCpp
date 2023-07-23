// you have Rs.15 and you can buy one chocolate for one rupee, and a chocolate for every 3 wrappers. Find the maximum number of chocolates you can buy.

#include<iostream>
using namespace std;

int main(){
    int rs=15,wr,remwr=0;
    int ch=0;

    do
    {
        ch += rs;
        wr=rs+remwr;
        remwr=rs%3;
        rs/=3;
    } while (wr>0);
    
    
}