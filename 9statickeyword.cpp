// static keyword 

// 1️⃣ Static variables: Class ke andar declare kiye gaye variables ko static variable kehte hai. Ye variables class ke saath associate hote hai, na ki objects ke saath. Inka memory allocation program ke start hone par hota hai aur program ke end hone par release hota hai. Static variables ka value sabhi objects ke liye same hota hai.

// 2️⃣ Static functions: Class ke andar declare kiye gaye functions ko static function kehte hai. Ye functions class ke saath associate hote hai, na ki objects ke saath. Static functions ko call karne ke liye hume class name ka use karna padta hai, na ki object name ka. Static functions ke andar hum sirf static variables ka use kar sakte hai, non-static variables ka use nahi kar sakte hai.




#include <iostream>
using namespace std;
 
// void fun(){
//     // static ek gobal variable jaisa hota hai jo function ke andar declare hone ke baad bhi apni value ko maintain karta hai 
//     static int x = 0;
//     cout<<"x is "<<x<<endl;
//     x++;
// }
 

class ABC{
   public:

    ABC(){
        cout<<"constructor"<<endl;
    }
   
    ~ABC(){
        cout<<"destructor"<<endl;
    }

};

int main() {
    // fun();
    // fun();
    // fun();

    if(true){
        static ABC obj; // static object ka destructor program ke end me call hota hai
    }

    cout<<"main function"<<endl;
    return 0;
}