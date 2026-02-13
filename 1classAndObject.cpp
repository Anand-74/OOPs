#include <iostream>
#include <string>
using namespace std;

 class teacher{
    private:
    int salary;
    public:
    string name;
    string subject;
    string department;
     

    //  see agar koi variable ko private karna hai to uske liye hum setter and getter ka use karte hai
    // par kyu?
    // kyunki agar hum salary ko private kar dete hai to koi bhi usko directly access nahi kar sakta hai
    // aur agar hum setter and getter ka use karte hai to hum salary ko access kar sakte hai aur usko change bhi kar sakte hai
   



    //setter
    void setSubject(string subject){
        this->subject = subject;
    }
     //setter
    void setSalary(int salary){
       this->salary = salary;
    }

    
    // getter
    void getSalary(){
        cout<<"Salary is "<<salary<<endl;
    }

 };

int main() {
    teacher t1;
    t1.name = "ANNI";
    t1.subject = "maths";
    t1.department = "IT";
    t1.setSubject("c++");
    t1.setSalary(50000);


    cout<<"Name is "<<t1.name<<endl;
    cout<<"subject is "<<t1.subject<<endl;
    cout<<"department is "<<t1.department<<endl;
    t1.getSalary();
    return 0;
}