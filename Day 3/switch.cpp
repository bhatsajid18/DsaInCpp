#include<iostream>
using namespace std;

// switch: variable is matched with multiple values, and code corresponding to matched value is executed.

int main(){
    char press;
    cin>>press;

    switch (press)
    {
        case 'A':
            cout<<"Hello\n";
            break;
        case 'B':
            cout<<"Hola\n";
            break;
        case 'C':
            cout<<"Namaste\n";
            break;
        case 'D':
            cout<<"Salaam\n";
            break;    
        default:
            cout<<"I am still learning.\n";
            break;
    }
}