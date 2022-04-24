#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int matriz[4][4], matriz2[4][4], matriz3[4][4];
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = (rand() % 50) - 25;
            matriz2[i][j] = (rand() % 50) - 25;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            if (matriz[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    // print matriz

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", matriz3[i][j]);
        }
        printf("\n");
    }
}