//friend function
//friend function is a function that is not a member of the class but has access to the private and protected members of the class. It is declared using the keyword 'friend' in the class definition.






#include <iostream>
using namespace std;
class Box {
private:
    int length;
public:
    Box(int l) {
        length = l;
    }
    // Declare friend function
    friend void printLength(Box b);
};

// Define friend function
void printLength(Box b) {
    // Accessing private member
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b1(10);
    printLength(b1);  // Calling friend function
    return 0;
}
