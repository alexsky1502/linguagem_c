#include <iostream>
#include <string>
using namespace std;

int main() {
    int myNumbers[5] = {1,2,3,4,5};
    int getArrayLength = sizeof(myNumbers)/sizeof(int);
    cout << getArrayLength;
}