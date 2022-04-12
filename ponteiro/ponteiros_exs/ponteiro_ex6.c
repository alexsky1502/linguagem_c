#include <stdio.h>
#include <stdlib.h>

int somaDobro(int *a, int *b);

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", somaDobro(&a, &b));
}

int somaDobro(int *a, int *b) {
    int soma;
    printf("%d %d\n", *a, *b);
    soma = (*a)*2 + (*b)*2;
    *a = (*a)*2;
    *b = (*b)*2;
    printf("%d %d\n", *a, *b);
    return soma;
}