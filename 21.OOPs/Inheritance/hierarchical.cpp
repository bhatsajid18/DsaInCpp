#include<iostream>
using namespace std;
class top{
    public:
    void Afunc(){
        cout<<"Func Top.\n";
    }
};
class middle1: public top{
    public:
    void Bfunc(){
        cout<<"Func Middle1.\n";
    }
};

class middle2: public top{
    public:
    void Cfunc(){
        cout<<"Func Middle2.\n";
    }
    
};

class ground1: public middle1{
    public:
};
class ground2: public middle1{
    public:
};

class ground3: public middle2{
    public:
};
class ground4: public middle2{
    public:
};

int main(){
    ground1 g1;
    ground2 g2;
    ground3 g3;
    ground4 g4;

    g1.Afunc();
    g1.Bfunc();
    g2.Afunc();
    g2.Bfunc();
    g3.Afunc();
    g3.Cfunc();
    g4.Afunc();
    g4.Cfunc();
}