#include <stdio.h>
#include <stdlib.h>

int SumOfElements(int* A, int size) { //int* A or int A[] is the same thing //call by reference, instead of creating
    // a cpoy of a large and complex data type, we just reference to it int*A = &A[0]
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += A[i]; //A[i] is *(A+i) *() = dereference , A + 1 = endereco mais 1 byte
    }

    return sum;
}

int main (void) {
    int A[] = {1,2,3,4,5};
    //int size = sizeof(A); return the size of the array in bytes. so in this case there would be 20 bytes, because
    //an integer has 4 bytes.
    int size = sizeof(A)/sizeof(A[0]); //would return the number of elements in the array
    int total = SumOfElements(A, size); //A can be used for &A[0], in the function passed would be int*A = &A[0];
    printf("Sum of the elements = %d\n", total);
}