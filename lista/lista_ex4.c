#include <stdio.h>

int main (void) {
    int vetor[5], x, y, soma = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("valores para x e y: ");
    scanf("%d %d", &x, &y);
    for (int i = 0; i < 5; i++) {
        if (i == x ) {
            soma = soma + vetor[x];
        } 
        else if(i == y) {
            soma = soma + vetor[y];
        }
    }
    printf("%d", soma);
}