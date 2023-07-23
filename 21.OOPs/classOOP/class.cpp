#include<iostream>
using namespace std;

class student{
    string name;
    public: //by default data members are private and they can't be accessed outside the class.
    // string name;
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }//default constructor (when we don'y pass any parameters in the object)

    student(string s, int a, bool g){
        cout<<"Parameterised constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }//parameterised constructor

    student( student &s){
        cout<<"Copy constructor"<<endl;
        name=s.name;
        age=s.age;
        gender=s.gender;
    }//copy constructor: it will copy values of data members from object s

    ~student(){
        cout<<"Destructor called."<<endl;
        //it will be called after execution of main function as many times as the number of objects created
    }

    void printInfo(){ //it will automatically call objects, or we can pass parameter 'student x' 
        cout<<"Name = ";
        cout<<name<<endl;//if we pass parameter, we will print x.name, x.age and x.gender
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    //operator overloading: making an operator behave in a particular way
    bool operator == (student &s){  //here == is operator overloading
        if (name==s.name && age==s.age && gender==s.gender)
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
    /*
    student s;
    s.name="Sajid";
    s.age=21;
    s.gender=0;
    */

   /*
   student arr[3];
   for (int i = 0; i < 3; i++)
   {
        cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
   }
   
   for (int i = 0; i < 3; i++)
   {
        arr[i].printInfo(); //if we pass parameter above, we will to to pass 'arr[i]' as argument here.
   }
   */


  //constructor
    student s("Sajid",20,0);
    s.printInfo();


    student b; //it will call default constructor

    student c=s;
    c.printInfo();

    if (c==s)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not same"<<endl;
    }
    
    
}
