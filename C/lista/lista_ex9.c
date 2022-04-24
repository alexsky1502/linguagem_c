#include <stdio.h>

int main(void) {
    int vetor[6], valor;
    for (int i = 0; i < 6; i++){
        scanf("%d", &valor);
        while (valor%2 != 0) {
            printf("digite um valor par ");
            scanf("%d", &valor);
        }

        vetor[i] = valor;
    }
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
}