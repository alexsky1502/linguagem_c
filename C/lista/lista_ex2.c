#include <stdio.h>

int main (void) {
    int A[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}