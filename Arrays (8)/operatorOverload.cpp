#include<iostream>
using namespace std;

//operator overloading

class complex{
    private:
    int real,img;

    public:

    // complex(){ //default constructor
        
    // } 

    complex(int r, int i){
        real=r;
        img=i;
    }

    //operator overload
    complex operator + (complex const &obj){
        complex res(real+obj.real,img+obj.img);
        // res.img=img+obj.img;
        // res.real=real+obj.real;
        return res;
    }

    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    complex c1(12,7), c2(6,7);
    // complex c3=c1+c2;
    // c3.display();
    (c1+c2).display();
}