//abstraction is the process of hiding the implementation details and showing only functionality to the user.it focuses on exposes only that information which we want to expose.

// abstract classe
// abstract classes are used to provide a base class from which other classes can be derived
// they cannot be instantiated and are meant to be inherited
//abstract classes are typically used to define an interface for derived classes.



#include <iostream>
using namespace std;

class Shape{
      public:
      virtual void area() = 0;
};

class Rectangle : public Shape{
    public:

    void area(){
        cout<<" Rectangle area is l*b"<<endl;
    }
    

};


int main() {
    
    Rectangle r;
    r.area();
    return 0;
}