#include<iostream>
int main(){
    int a=10,b=5,c=29;
    if (a>b)
    {
        if (a>c)
        {
            std::cout<<a<<" is greatest";
        }else{
            std::cout<<c<<" is greatest";
        }
    }else{
        if (b>c)
        {
            std::cout<<b<<" is greatest";        
        }else{
            std::cout<<c<<" is greatest";
        }   
    }
}