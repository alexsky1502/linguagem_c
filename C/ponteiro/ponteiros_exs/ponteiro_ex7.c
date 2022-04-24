#include <stdio.h>
#include <stdlib.h>

void funcao(int *a, int *b);

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    funcao(&a, &b);
    printf("%d %d", a, b);
}

void funcao(int *a, int *b) {
    *a = *b + *a;
}