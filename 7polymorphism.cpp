// run time polymorphism has function overriding and virtual functions.

//function over riding is a feature of polymorphism in which a derived class provides a specific implementation of a function that is already provided by its base class. The implementation in the derived class overrides the implementation in the base class.



#include <iostream>
using namespace std;

class Parent{
    public:
    void display(){
        cout<<"this is parent class"<<endl;
    }
};

class child: public Parent{
    public:
    void display(){
        cout<<"this is child class"<<endl;
    }
};





//virtual function is a member function in the base class that you can override in a derived class. It is declared using the keyword virtual. these functions are dynamic in nature and  declared in base class and overriden in child class. it is called during run time


 class Animal{
    public:
    virtual void sound(){
      cout<<"animal can make sound"<<endl;
    } 
 };

 class Dog: public Animal{
    public:
    void sound(){
        cout<<"dog can bark"<<endl;
    }
 };


int main() {
//    child c1;
//    c1.display();

   Dog d;
   d.sound();


    return 0;
}