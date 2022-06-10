#include <iostream> // CALL BY VALUE
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r1){ //formal parameter if it was a call by reference it would be "struct
//Rectangle &r1. and as always call by reference the struct will not be a separate block
//of machine code, it will be pasted at the place of fuction call"
    return r1.length * r1.breadth;
}

int main(void){
    struct Rectangle r = {10,5}; //actual parameter not modified 
    cout << area(r);
}