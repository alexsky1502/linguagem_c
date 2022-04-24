/* 7. Fac¸a um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua ˜
media. */

#include <stdio.h>

int main() {
    int num, soma = 0;
    for (int i = 0; i < 10; i ++){
        scanf("%d", &num);
        if (num < 0){
            ; // pass statement
        }
        else {
            soma = soma + num;
        }
    }
    printf("%d\n", soma);
    printf("%lf", soma/10.0);
}