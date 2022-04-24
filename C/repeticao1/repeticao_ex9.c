//9. Fac¸a um programa que leia um numero inteiro ´ N e depois imprima os N primeiros
//numeros naturais ´ ´ımpares.

#include <stdio.h>

int main () {
    int n, i = 0, j = 0;
    scanf("%d", &n);
    while (j != n) {
        if (i%2 == 1) {
            printf("%d ", i);
            j++;
        }
        i++;
    }
}