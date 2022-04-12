#include <stdio.h>
#include <math.h>

int main(void) {
    double A[5], B[5];
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &A[i]);
        B[i] = pow(A[i], 2);
    }
    for (int i = 0; i < 5; i++) {
        printf("%lf\n", B[i]);
    }
}