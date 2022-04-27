#include <iostream>
#include <string>
using namespace std;

/* void MyClass::myMethod() { outside function to a class
    cout << "Hello World";
} */

class Myclass {
    public:
        void myMethod() { //method inside the function
            cout << "Hello World";
        }
        //if we want to use otside the function it would be like:
        //void myMethod();
};

int main() {
    Myclass myObj;
    myObj.myMethod();
    return 0;
}