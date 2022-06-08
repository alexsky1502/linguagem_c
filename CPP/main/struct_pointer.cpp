#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main(){
    struct Rectangle *p; //declaration
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //initialize 
    //the object is created inside the heap and the pointer will be pointing on it
    //in c++: p = new Rectangle;
    p->length = 10; //(*p).length = 20;
    p->breadth = 10;
}