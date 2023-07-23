#include<iostream>
using namespace std;

int knapsack(int wt[], int val[], int W, int n){
    if (n==0 || W==0){
        return 0;
    }
    if (wt[n-1]>W){
        return knapsack(wt,val,W,n-1);
    }
    
    return max(knapsack(wt,val,W-wt[n-1],n-1)+val[n-1], knapsack(wt,val,W,n-1));
}

int main(){
    int wt[]={10,30,40};
    int val[]={70,30,110};
    int W=40;
    cout<<knapsack(wt,val,W,3);
}