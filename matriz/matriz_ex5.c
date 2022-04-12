#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int matriz[4][4], numero, bool = 0;
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = (rand() % 50) - 25;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    scanf("%d", &numero);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                printf("%d %d", i, j);
                bool++;
                break;
            }
        }
        printf("\n");
    }

    if (bool == 0) {
        printf("nao foi encontrado");
    }
}