// Encapsulation in C++ is a fundamental object-oriented programming concept that involves bundling data and methods that operate on that data within a single unit, typically a class. It allows for data hiding, which means that the internal state of an object can only be accessed and modified through well-defined interfaces (methods). This promotes modularity, maintainability, and security in code.
#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
    string balance;
    string password; //data hiding

    public:
    string username;
    int accountId;
     

    void setBalance(string balance){
         this->balance = balance;
    }

    void setPassword(string pass){
           this->password = pass;
    }
    
   void getbalance(){
      cout<<balance<<endl;
   } 

   void getPassword(){
      cout<<password<<endl;
   }
};

int main() {

  Account ac1;
   ac1.username = "Anand Jhanjhar";
   ac1.accountId = 100;
   ac1.setPassword("abcd1234");
   ac1.setBalance("50000");
   
  cout<<"Username is "<<ac1.username<<endl;
  cout<<"AccounId is " <<ac1.accountId<<endl;
   ac1.getbalance();
   ac1.getPassword(); 
return 0;
}