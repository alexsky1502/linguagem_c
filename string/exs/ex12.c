#include <stdio.h>
#include <string.h>

void contaVogais(char* palavra);
void trocaVogal(char* palavra, char* caractere);

int main(void) {
    char palavra[30], caractere[10];
    fgets(palavra, 30, stdin);
    contaVogais(palavra);
    fgets(caractere, 10, stdin);
    trocaVogal(palavra, caractere);
}

void trocaVogal(char* palavra, char* caractere) {
    int i = 0;
    while (palavra[i] != '\0') {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == ' ') {
            palavra[i] = *caractere;
        } else {
            ;
        }
        i++;
    }
    printf("%s", palavra);
}

void contaVogais(char* palavra) {
    int count = 0, i = 0;
    while (palavra[i] != '\0') {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == ' ') {
            count++;
        } else {
            ;
        }
        i++;
    }
    printf("%d", count);
}