/* 6. Fac¸a um programa que leia 10 inteiros e imprima sua media */

#include <stdio.h>

int main (void) {
    int num, soma = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("%d\n", soma);
    printf("%lf", soma/10.0);
}