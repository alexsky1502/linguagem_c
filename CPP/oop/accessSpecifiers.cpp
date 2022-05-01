#include <iostream>
#include <string>

class MyClass {
    public:
        int x;
    private: //members cannot be accessed or viewed from outside the class
        int y;
};

int main() {
    MyClass myObj;
    myObj.x = 25;
    //myObj.y = 50;
    return 0;
}