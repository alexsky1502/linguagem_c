#include <iostream>
using namespace std; 
//means that we can use names for objects and variables from the standard library.

int main() {
    cout << "Hello World\n"; //we can ommit just by using std::
    //so in this case we can use std::cout << "Hello World";
    //cout is a object and the << the operator;
    cout << "I am learning C++" << endl; //another way to a new line;
    cout << "just testing\t"; //creates a horizontal tab
    cout << "testando"; // \\- insert a blackslash and \"- insert a double quote
    return 0;
}