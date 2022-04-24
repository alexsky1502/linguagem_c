#include <stdio.h>
//It is defined as the pointer which points 
//to the address of the memory block that stores a structure is known as the structure pointer.
struct Person {
    int age;
    float weight;
};

int main() {
    struct Person *personPtr, person1;
    personPtr = &person1; //in this code person1 is instance of struct Person and personPtr is
    // the struct pointer because it is storing the address of struct point.    

    printf("Enter age: ");
    scanf("%d", &((*personPtr).age)); //to access members of a structure using pointers, we use ->

    printf("Enter weight: ");
    scanf("%f", &(personPtr->weight));

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age); // is equivalent to (*personPtr).age
    printf("weight: %f", personPtr->weight); // is equivalent to (*personPtr).weight

    return 0;
}