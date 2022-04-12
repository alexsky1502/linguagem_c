#include <stdio.h>

int main(void) {
    int vetor[5], par = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (vetor[i]%2 == 0) {
            par++;
        }
    }

    printf("%d", par);
}