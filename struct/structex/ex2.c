#include <stdio.h>

typedef struct Aluno {
    char nome[50];
    int idade;
    char address[50];
} aluno;

int main() {
    aluno p1;

    printf("Nome: ");
    fgets(p1.nome, 50, stdin);
    printf("idade: ");
    scanf("%d", &p1.idade);
    printf("address: ");
    scanf("%s", &p1.address);

    printf("%s %d %s\n", p1.nome, p1.idade, p1.address);
}