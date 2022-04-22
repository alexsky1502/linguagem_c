#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

void Display(struct Aluno lista[2]) {
    for (int i = 0; i < 2; i++) {
        printf("nome: %s/matricula: %d\n", lista[i].nome, lista[i].matricula);
        printf("curso: %s\n", lista[i].curso);
    }
}

int main() {
    struct Aluno lista[2]; //array de structure
    for (int i = 0; i < 2; i++) {
        printf("%d aluno\n", i+1);

        printf("nome: ");
        fgets(lista[i].nome, 50, stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = 0;
        //scanf("%[^\n]%*c", &lista[i].nome);
        //printf("matricula e curso");
        //scanf("%d %[^\n]%*c", &lista[i].matricula, &lista[i].curso);
        printf("matricula: ");
        scanf("%d%*c", &lista[i].matricula);
        printf("curso: ");
        fgets(lista[i].curso, 50, stdin);
    }
    Display(lista);
}