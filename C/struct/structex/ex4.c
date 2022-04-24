#include <stdio.h>
#include <string.h>

typedef struct Aluno {
    int matricula;
    char nome[50];
    float n1, n2, n3;
} aluno;

void maiorNota(aluno lista[3]);
void maiorMedia(aluno lista[3]);
void menorMedia(aluno lista[3]);
void aprovado(aluno lista[3]);

int main() {
    aluno lista[3];
    for (int i = 0; i < 3; i++) {
        printf("nome: ");
        fgets(lista[i].nome, 50, stdin);
        //printf("matricula: ");
        //scanf("%d", &lista[i].matricula);
        printf("notas 1 2 3: ");
        scanf("%f %f %f%*c", &lista[i].n1, &lista[i].n2, &lista[i].n3);
    }

    maiorNota(lista);
    maiorMedia(lista);
    menorMedia(lista);
    aprovado(lista);
}

void maiorNota(aluno lista[3]) {
    float maior = 0;
    for (int i = 0; i < 3; i++) {
        if (lista[i].n1 > maior) {
            maior = lista[i].n1;
        }
    }
    printf("a maior nota eh: %0.2f", maior);
}

void maiorMedia(aluno lista[3]) {
    float maiorMedia = 0, tmp;
    for (int i = 0; i < 3; i++) {
        tmp = (lista[i].n1 + lista[i].n2 + lista[i].n3)/3.0;
        if (tmp > maiorMedia) {
            maiorMedia = tmp;
        }
    }

    printf("\na maior media eh: %0.2f", maiorMedia);
}

void menorMedia(aluno lista[3]) {
    float menorMedia = 10, tmp;
    for (int i = 0; i < 3; i++) {
        tmp = (lista[i].n1 + lista[i].n2 + lista[i].n3)/3.0;
        if (tmp < menorMedia) {
            menorMedia = tmp;
        }
    }

    printf("\na menor media eh: %0.2f", menorMedia);
}

void aprovado(aluno lista[3]) {
    float media;
    for (int i = 0; i < 3; i++) {
        media = (lista[i].n1 + lista[i].n2 + lista[i].n3)/3.0;
        if (media >= 6.0) {
            printf("\naluno %s aprovado", lista[i].nome);
        } else {
            printf("\naluno %s reprovado", lista[i].nome);
        }
    }

}