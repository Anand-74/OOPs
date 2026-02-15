// polymorphism in cpp is an important concept which is known as many forms. It allows us to use a single interface to represent different types of objects or to perform different operations based on the context. Polymorphism is achieved through function overloading, operator overloading, and inheritance with virtual functions. It enables code reusability, flexibility, and extensibility in object-oriented programming.
//it consists of two types of polymorphism
// 1. compile time polymorphism - it is achieved through function overloading and operator overloading. it is also known as static polymorphism because the decision of which function to call is made at compile time.
  
// 2. runtime polymorphism - it is achieved through inheritance and virtual functions. it is also known as dynamic polymorphism because the decision of which function to call is made at runtime.

#include <iostream>
using namespace std;

//constructoroverloading

  class human{
      public:
      string name;
      int age;
      
      human(){
        cout<<"non parameterized constructor called"<<endl;
      }
      
      human(string n , int a){
        this->name = n;
        this->age = a;
        cout<<"parameterised constructor called"<<endl;
      }
  };




//function overloading





    class student{
       public:
    
       void getInfo(string name){
            cout<<"Name is "<<name<<endl;
       }

       void getInfo(string name , int age){
            cout<<"Name is "<<name<<" and age is "<< age << endl;
       }        
 
     };


   //operator overloading


class Number {
public:
    int value;
    Number(int v) : value(v) {}

    // Overloading + operator
    Number operator+(const Number& n) {
        return Number(value + n.value);
    }
};
     

int main() {

    // constructor overloading;

    // human h;
    // human h("Anni",20);
    // cout << h.name <<endl<<" "<<h.age<<endl;
    

   
    //function overloading
   
    // student s1;
    // // s1.getInfo("Anni");
    // s1.getInfo("Anni" , 24);



    //operator overloading

    Number n1(5), n2(10);
    Number n3 = n1 + n2;  // '+' operator overloaded
    cout << n3.value;      // 15

    return 0;
}