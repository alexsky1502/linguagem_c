#include <stdio.h>

int main(void) {
    int maior, vetor[5], indice;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (int i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            indice = i;
        } 
    }

    printf("%d %d", maior, indice);
}