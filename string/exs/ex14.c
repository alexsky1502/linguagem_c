#include <stdio.h>
#include <string.h>

void mudaAscii(char* palavra, int tamanho); 

int main(void) {
    char palavra[50];
    int tamanho, inteiro;
    scanf("%s", &palavra);
    inteiro = (int)palavra[2] + 1; //typecasting
    tamanho = strlen(palavra);
    mudaAscii(palavra, tamanho);
}

void mudaAscii(char* palavra, int tamanho) {
    char tmp;
    for (int i = 0; i < tamanho; i++) {
        tmp = (int)palavra[i] + 1;
        palavra[i] = (char)tmp;
    }
    printf("%s", palavra);
}
