#include <stdio.h>

int main(void) {
    int maior, menor, vetor[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        } else if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("%d %d", maior, menor);
}