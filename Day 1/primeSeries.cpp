#include<iostream>
int main(){
    int n,i,j;
    std::cout<<"Enter end limit:\n";
    std::cin>>n;
    for ( i = 2; i <= n; i++)
    {
        int flag=0;
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
        {
            flag=1;
            break;
        }
        }
        if (flag==0)
        {
            std::cout<<i<<"\t";
        }   
        
    }

}