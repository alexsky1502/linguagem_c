#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int** criarMatriz() {
    int matriz[4][4];
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = (rand() % 50) - 25;
        }
    }

    return matriz;
}

int main(void) {
    int** matriz = criarMatriz();
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}