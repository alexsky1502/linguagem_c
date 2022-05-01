#include <iostream>

class MyClass {
    public:
        void myFunction() {
            std::cout << "some content in parent class";
        }
};

class MyOtherClass {
    public:
        void myOtherFunction() {
            std::cout << "some content in another class";
        }
};

class MyChildClass: public MyClass, public MyOtherClass {

};

int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}