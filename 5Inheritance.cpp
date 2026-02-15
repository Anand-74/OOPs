// Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a new class (called a derived class or child class) to inherit properties and behaviors (data members and member functions) from an existing class (called a base class or parent class). This promotes code reusability and establishes a natural hierarchical relationship between classes. Inheritance enables the creation of a new class that is a specialized version of an existing class, allowing for the extension and modification of the base class's functionality without altering its original code.


 // constructor call hota hai to pehle base class ka constructor call hota hai fir derived class ka constructor call hota hai 
 //destructor call hota hai to pehle derived class ka destructor call hota hai fir base class ka destructor call hota hai 
 


//  3 tarike ke mode hote hai inheritance me ek private inheritance hota hai, ek public inheritance hota hai aur ek protected inheritance hota hai. private inheritance me base class ke public aur protected members derived class ke private members ban jate hai. public inheritance me base class ke public members derived class ke public members ban jate hai aur base class ke protected members derived class ke protected members ban jate hai. protected inheritance me base class ke public aur protected members derived class ke protected members ban jate hai.

//  aur access hum inko kaise kar sakte hai to hum directly access kar sakte hai agar wo public inheritance hai to agar wo private inheritance hai to hum directly access nahi kar sakte hai aur agar wo protected inheritance hai to hum directly access nahi kar sakte hai lekin hum derived class ke member function ke through access kar sakte hai.








// Single Inheritance – Ek child class sirf ek parent class se inherit karti hai.

// 2️⃣ Multilevel Inheritance – Ek class dusri se, aur wo teesri se inherit kare (chain system).

// 3️⃣ Multiple Inheritance – Ek child class ek se zyada parent classes se inherit karti hai.

// 4️⃣ Hierarchical Inheritance – Ek hi parent class se multiple child classes inherit karti hain.

// 5️⃣ Hybrid Inheritance – Inheritance ke alag-alag types ka combination hota hai.


// IMPORTANT

// Diamond Problem tab hoti hai jab ek class ko same method multiple parents se milta hai aur compiler confuse ho jata hai.
// Virtual Inheritance me parent class ka sirf ek hi copy child tak pahunchta hai, chahe wo multiple paths se inherit ho.
// 2️⃣ Isse Diamond Problem ka confusion khatam ho jata hai, kyunki duplicate data/method nahi bante.

#include <iostream>
using namespace std;

class human{
    public: 
    string name;
    string age;
    human(string n , string a){
        this->name = n;
        this->age = a;
    }
};

class student : public human{
   public:
   int roll_No;
   // yahan hum apni property upar wale class ko pass kar rahe hai aur use sath apni property bhi pass kar rahe hai.
   // ye super keyword se milta hai java me but c++ me hum directly base class ke constructor ko call kar sakte hai.

   student(string n , string a, int r): human(n,a){
      this->roll_No = r;
   }
   
   void getinfo(){
    cout<<"Name is "<< name<<endl;
    cout<<"Age is "<< age<<endl;
    cout<<"RollNo is "<< roll_No<<endl;
   }

};


int main() {

    student s1("anni" , "24", 1); 
    s1.getinfo();
    
    return 0;
}