#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int matriz[4][4];

    srand(time(NULL)); // para os numeros gerados nunca repetirem

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = i * j;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}