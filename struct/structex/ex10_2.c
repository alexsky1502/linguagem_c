#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Contato {
    char nome[50];
    char address[50];
    int telefone;
} contato;

void Entrada(contato lista[3]);
void Display(contato lista[3]);

void Ordenar(contato lista[3]) {
    char *tmp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (strcmp(lista[i].nome, lista[j].nome) < 0) {
                strcpy(tmp, lista[i].nome);
                strcpy(lista[i].nome, lista[j].nome);
                strcpy(lista[j].nome, tmp);
            }
        }
    }
}

int main() {
    contato lista[3];
    Entrada(lista);
    Display(lista);
    Ordenar(lista);
    Display(lista);
}

void Entrada(contato lista[3]) {
    for (int i = 0; i < 3; i++) {
        printf("nome: ");
        fgets(lista[i].nome, 50, stdin);
    }
}

void Display(contato lista[3]) {
    for (int i = 0; i < 3; i++) {
        printf("%s\n", lista[i].nome);
    }
}