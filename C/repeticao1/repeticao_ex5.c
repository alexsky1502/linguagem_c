/* 5. Fac¸a um programa que pec¸a ao usuario para digitar 10 valores e some-os. */

#include <stdio.h>

int main() {
    int num, soma = 0;
    for (int i = 0; i < 5; i++) {
        printf("digite um numero ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("soma: %d", soma);
    return 0;
}