#include<iostream>
using namespace std;

class student{
    string name;
    public: 
    int rollNo;
    bool gender;  //0-->male,  1-->female

    student(string s, int a, bool g){
        name=s;
        rollNo=a;
        gender=g;
    }
    student(){}

    student(student &s){
        name=s.name;
        rollNo=s.rollNo;
        gender=s.gender;
    }

    void printInfo(){ 
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Roll No. = ";
        cout<<rollNo<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }


    //operator overloading: making an operator behave in a particular way
    //sorting students on basis of their age

    bool operator > (student &s){  //here == is operator overloading
        if (rollNo>s.rollNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(){
    student s[4];
    string st;
    int rollNo;
    bool gender;
    for(int i=0;i<4;i++){
        cin>>st>>rollNo>>gender;
        s[i]=student(st,rollNo,gender);
    }
    cout<<"\nStudent details before sorting:\n";
    for(int i=0;i<4;i++){
        s[i].printInfo();
    }

    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(s[i]>s[j]){
                student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    cout<<"\nStudent details after sorting:\n";
    for(int i=0;i<4;i++){
        s[i].printInfo();
    }
}
