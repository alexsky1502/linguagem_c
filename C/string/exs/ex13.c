#include <stdio.h>
#include <string.h>

void contaBranco(char* frase);

int main(void) {
    char frase[100];
    fgets(frase, 100, stdin);
    contaBranco(frase);
}

void contaBranco(char* frase) {
    int i = 0, count = 0;
    while (frase[i] != '\0') {
        if (frase[i] == ' ') {
            count++;
        }
        i++;
    }
    printf("%d", count);
}