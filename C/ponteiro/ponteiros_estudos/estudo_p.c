#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    int *p
    p = A -> p = &A[0];
    print A -> 200
    print *A -> 2
*/
int main(void) {
    int A[] = {2,4,5,8,1};
    int i;
    for (i = 0; i < 5; i++) {
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A + 1);
        printf("value = %d\n", A[i]);
        printf("value = %d\n", *(A+i));
    }
}