// constructor is a special member function of a class that is executed whenever we create new object of that class. It is used to initialize the objects of its class. It has the same name as the class and does not have any return type.
// there are three types of constructors in c++

// 1. default constructor - a constructor that takes no arguments and initializes the object with default values.

// 2. parameterized constructor - a constructor that takes arguments and initializes the object with the values passed as arguments.

// 3. copy constructor - a constructor that creates a new object as a copy of an existing object.


/*
#include <iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    string name;
    string subject;
    string department;

    // default constructor
    Teacher(){
        cout<<"Default constructor called"<<endl;
    }

    // parameterized constructor
    Teacher(string name, string subject, string department){
        this->name = name;
        this->subject = subject;
        this->department = department;
        cout<<"Parameterized constructor called"<<endl;
    }
    
    // copy constructor
    Teacher(Teacher &t){
        this->name = t.name;
        this->subject = t.subject;
        this->department = t.department;
        cout<<"Copy constructor called"<<endl;
    }
}

*/


/*

// parameterised Constructor Example
#include<iostream>
#include<string>
using namespace std;


 class Teacher{
    public:

    Teacher(string n , string s , string d){
     this->name = n;
     this->subject = s;
     this->department = d;
    }

    string name;
    string subject;
    string department;
   
    void showInfo(){
        cout<<"name is "<<name<<endl;
        cout<<"subject is "<<subject<<endl;
        cout<<"department is "<<department<<endl;
    }
    
 };
 
*/

 // non-parameterised Constructor Example

/*
#include<iostream>
#include<string>
using namespace std;


 class Teacher{
    public:

    // Teacher(){
    //    name = "anni";
    //    subject = "maths";
    //    department = "IT";    
    // }

    Teacher(){
        cout<<"constructor called"<<endl;
    }

    string name;
    string subject;
    string department;
   
    void showInfo(){
        cout<<"name is "<<name<<endl;
        cout<<"subject is "<<subject<<endl;
        cout<<"department is "<<department<<endl;
    }
    
 };

 */
 





  #include<iostream>
  #include<string>
  using namespace std;


 class Teacher{
    public:

    Teacher(string n , string s , string d){
     this->name = n;
     this->subject = s;
     this->department = d;
    }

    Teacher(Teacher& t){
        this->name = t.name;
        this->subject = t.subject;
        this->department = t.department;
    }

    string name;
    string subject;
    string department;
   
    void showInfo(){
        cout<<"name is "<<name<<endl;
        cout<<"subject is "<<subject<<endl;
        cout<<"department is "<<department<<endl;
    }
    
 };
 

int main() {
 /*
    // parameterized constructor
    Teacher Anni("Anand Jhanjhar", "C++", "IT");
    Anni.showInfo();


    // non parameterized constructor
    Teacher Aman;
    Aman.name = "Anni Badmosh";
    Aman.subject = "Maths";
    Aman.department = "IT";
    Aman.showInfo();
    */
  
    //copy constructor

    Teacher Anni("Anand Jhanjhar", "C++", "IT");
    Teacher Annicopy(Anni); // copy constructor called
    Annicopy.showInfo();

    
    return 0;
}