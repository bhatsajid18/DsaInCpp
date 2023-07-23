#include<iostream>
using namespace std;
class A{
    public:
    void Afunc(){
        cout<<"Func A.\n";
    }
};
class B: public A{
    public:
    void Bfunc(){
        cout<<"Func B.\n";
    }
};

class C{
    public:
    void Cfunc(){
        cout<<"Func C.\n";
    }
    
};

class D: public B, public C{
    public:
};

int main(){
    D d;
    d.Afunc();
    d.Bfunc();
    d.Cfunc();
}