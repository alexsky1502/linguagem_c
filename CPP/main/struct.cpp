#include <iostream>
#include <string>
using namespace std;

struct {
    int myNum;
    string myString;
} myStructure; //create a structure variable 

int main() {
    //assign values 
    myStructure.myNum = 1;
    myStructure.myString = "Hello World";

    //print the values of the variables
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
}