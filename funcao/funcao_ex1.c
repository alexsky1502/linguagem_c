#include <stdio.h>
#include <stdlib.h>

int dobro(int numero); // prototype

int main(void) {
    int numero, resposta;
    printf("me diz um numero inteiro\n");
    scanf("%d", &numero);
    resposta = dobro(numero);
    printf("%d", resposta);
}

int dobro(int numero) {
    int resultado;
    resultado = numero * 2;
    return resultado;
}