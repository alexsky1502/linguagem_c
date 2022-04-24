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

int comparar( const void *str1, const void *str2 )
{
    // qsort() passes in `void*` types because it can't know the actual types being sorted
    char *const *pp1 = str1;
    char *const *pp2 = str2;
    return strcmp(*pp1, *pp2);
}

int main() {
    contato lista[3];
    Entrada(lista);
    Display(lista);
    qsort(lista, 3, sizeof(lista), comparar);
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