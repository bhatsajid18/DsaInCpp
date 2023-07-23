#include<iostream>
#include<math.h> // or <cmath>
using namespace std;

int main(){
    int n;
    bool flag=0;
    cout<<"Enter any number:\n";
    cin>>n;

    for (int i = 2; i <= sqrt(n); i++) // if there's a factor > sqrt, then its corresponding pair will be < sqrt. (which we would've checked already)
    {
        if (n%i==0)
        {
            cout<<n<<" is not prime.\n";
            flag=1;
            break;
        }  
    }
    
    if (flag==0)
    {
        cout<<n<<" is prime.\n";
    }
    
}