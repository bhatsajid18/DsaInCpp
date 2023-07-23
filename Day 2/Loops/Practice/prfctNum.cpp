#include<iostream>
using namespace std;

int main(){
    int n=500; 
    cout<<"Perfect numbers upto "<<n<<" are:\n";
    for (int i = 2; i <= n; i++)
    {
        int sum=0;

        for (int j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                sum+=j;
            }
            
        }
        if (sum==i)
        {
            cout<<sum<<" ";
        }
        
    }
    
}