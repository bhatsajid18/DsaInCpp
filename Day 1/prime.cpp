#include<iostream>
int main(){
    int n=13,i,flag=0;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            std::cout<<n<<" is not prime";
            flag=1;
            break;
        }
    }

    if (flag==0)
    {
        std::cout<<n<<" is prime";
    }
       
}