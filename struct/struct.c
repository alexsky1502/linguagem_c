//In C programming, a struct (or structure) 
//is a collection of variables (can be of different types) under a single name.

#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int citNo;
    float salary;
};

int main() {
    struct Person person1, person2, p[20];
    return 0;
}