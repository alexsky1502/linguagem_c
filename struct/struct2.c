#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int citNo;
    float salary;
} person1;

int main() {
    //assign value to name of person1
    strcpy(person1.name, "alex se yoon koo"); //This is because name is a char array (C-string) 
    //and we cannot use the assignment operator = with it after we have declared the string.

    //assign values to other person1 variables 
    person1.citNo = 1984;
    person1.salary = 2500;

    //print struct variables 
    printf("name : %s \n", person1.name);
    printf("citizen number: %d\n", person1.citNo);
    printf("salary: %0.2f", person1.salary);

    return 0;
}