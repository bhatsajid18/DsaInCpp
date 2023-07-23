#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"Single inheritance.\n";
    }
};

class B: public A{

};

int main(){
    B b;
    b.func();
}