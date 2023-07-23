#include<iostream>
using namespace std;
class A{
    int age;//it is not accessible outside class A
    public:
    void Afunc(){
        cout<<"Func A.\n";
    }
};
class B: public A{ //public and protected members of A will be inherited to public part of B
    private:
    void B1func(){ //not accessible outside class B
        cout<<"Func B1.\n";
    }
    public:
    void B2func(){ //accessible outside class A
        cout<<"Func B2.\n";
    }
};

class C:public B{//if we use private here, no member can be accessed outside class C
    // public:
    // C can have its own attributes as well
};

int main(){
    C c;
    B b;
    // b.age;
    c.B2func();
    // c.B1func();//error
}
    