#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int inteiro = 0;
    double real = 0;

    int* p1 = &inteiro;
    double* p2 = &real;

    printf("%d\n", inteiro);
    printf("%lf\n", real);

    *p1 = 1;
    *p2 = 0.1;

    printf("%d\n", inteiro);
    printf("%lf\n", real);
}