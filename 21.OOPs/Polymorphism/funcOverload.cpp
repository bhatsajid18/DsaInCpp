#include<iostream>
using namespace std;

//function overloading

class apnaCollege{
    public:
    void func(){
        cout<<"I am a function with no arguments.\n";
    }
    void func(int x){
        cout<<"I am a function with int arguments.\n";
    }
    void func(double x){
        cout<<"I am a function with double arguments.\n";
    }
};

int main(){
    apnaCollege obj;
    obj.func();
    obj.func(5);
    obj.func(5.00);
}