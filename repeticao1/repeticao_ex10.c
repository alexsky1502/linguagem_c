// 10. Fac¸a um programa que calcule e mostre a soma dos 50 primeiros numeros pares.

#include <stdio.h>

int main (void) {
    int i = 0, j = 0, soma = 0;
    while (j != 50) {
        if (i%2 == 0) {
            soma = soma + i;
            j++;
        }
        i++;
    }

    printf("%d", soma);
}