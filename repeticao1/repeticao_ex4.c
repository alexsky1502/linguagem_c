/* 4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, ate que seu valor seja 100000 (cem mil).*/

#include <stdio.h>

int main() {
    int number = 0;
    do {
        printf("%d\n", number);
        number = number + 1000;
    }
    while (number != 100000);
    printf("%d", number);
    return 0;
}