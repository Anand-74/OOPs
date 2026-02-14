/*
Destructorin c++
destructor is a special member function of a class that is executed whenever an object of its class goes out of scope or is explicitly deleted. it 
is used to free resources that the  object may have acquired during its lifetime. it has the same name as the class but is preceeded by a tilde ~
and does not take any arguement and does not return any value. it is called automatically when the object goes out of scope or is explicitly deleted using the delete operator.*/


#include <iostream>
#include<string>
using namespace std;
 
 class student{
    public:
    string name;
    int age;

    student(string n , int a){
        this->name = n;
        this->age = a;
    }

    ~student(){
        cout<<"Destructor called for "<<name<<endl;
    }
 };

int main() {
    student s1("Anand", 20);
    cout<<s1.name<<" "<<s1.age<<endl;
    student s2("badshah", 21);
    cout<<s2.name<<" "<<s2.age<<endl;
    
    return 0;
}