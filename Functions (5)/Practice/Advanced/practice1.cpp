// Sum of first n natural numers.

#include<iostream>
using namespace  std;

int sum(int num){
    int add=num*(num+1)/2;
    return add;
}



int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;

    cout<<"Sum of all natural numbers upto "<<n<<" = "<<sum(n)<<endl;

    return 0;
}