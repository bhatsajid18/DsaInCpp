#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any letter:\n";
    cin>>ch;
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        if (ch==65 || ch==69 || ch==73 || ch==79 || ch==85 ||ch==97 || ch==101 || ch==105 || ch==111 || ch==117)
        {
            cout<<"Vowel.\n";
        }

        else{
            cout<<"Consonant.\n";
        }
    }

    else{
        cout<<"Not a valid letter.\n";
    }
    
}
