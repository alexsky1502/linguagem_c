#include <iostream>
#include <string>
using namespace std;

class MyClass {
    public:
        MyClass() { // the constructor has the same name as the class, it is always public, and it 
        //does not have any return value
            cout << "Hello World";
        }
};

int main() {
    MyClass myObj;
    return 0;
}