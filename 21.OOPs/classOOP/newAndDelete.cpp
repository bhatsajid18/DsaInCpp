#include<iostream>
using namespace std;

class student{
    string name;
    int rollNo;
    bool gender;  //0-->male,  1-->female
    public:
    student(string s, int a, bool g){
        name=s;
        rollNo=a;
        gender=g;
    }
    student(){}

    virtual void myName(){
        cout<<"Sajid Ali Bhat.\n";
    }

    void printInfo(){ 
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Roll No. = ";
        cout<<rollNo<<endl;
        cout<<"Gender = ";
        if (gender){
            cout<<"Female"<<endl;
        }else{
            cout<<"Male"<<endl;
        }
    }

};
class sajid :public student{
    public:
    void myName(){
        cout<<"sajid ali bhat\n";
    }
};

int main(){

    //function overriding
    student *s;
    sajid sa;
    s=&sa;
    s->myName();

    // int n;
    // cin>>n;
    // student *s=new student[n];
 
    // string st;
    // int rollNo;
    // bool gender;
    // for(int i=0;i<n;i++){
    //     cin>>st>>rollNo>>gender;
    //     s[i]=student(st,rollNo,gender);
    // }
    // cout<<"\nStudent details:\n";
    // for(int i=0;i<n;i++){
    //     s[i].printInfo();
    // }

    // delete[] s;
}
