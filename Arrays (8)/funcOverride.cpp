#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"Base classes print function.\n";
    }
    void display(){
        cout<<"Base classes display function.\n";
    }
};
class inherit: public base{
    public:
    void print(){
        cout<<"Derived classes print function.\n";
    }
    void display(){
        cout<<"Derived classes display function.\n";
    }
};

int main(){
    base *baseptr;

    inherit obj;
    baseptr=&obj;
    baseptr->print();
    baseptr->display();
}