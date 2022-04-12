#include <string.h>
#include <stdio.h>

int main(void) {
    char nome[20];
    printf("digite o seu nome: ");
    scanf("%s", &nome);

    printf("%s", nome);
}