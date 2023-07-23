#include<iostream>
using namespace std;

void towerofhanoi(int n, char src, char dest, char temp){
    if (n==0){
        return;
    }
    towerofhanoi(n-1,src,temp,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1,temp,dest,src);
}

int main(){
    int n;
    cout<<"Enter number of discs to be moved from source to destination:\n";
    cin>>n;

    towerofhanoi(n,'S','D','T');
}