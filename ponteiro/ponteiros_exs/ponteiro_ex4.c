#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    troca(&a, &b);
}

void troca(int *a, int *b) {
    int aux;
    printf("a = %d, b = %d\n", *a, *b);
    aux = *a;
    *a = *b;
    *b = aux;
    printf("a = %d, b = %d", *a, *b);
}