#include <string>
#include <iostream>
using namespace std;

class MyClass {
    public:
        int myNum;
        string myString;
};

int main() {
    MyClass myObj; //create an object of MyClass (tipo e variavel)

    //access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    //print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}