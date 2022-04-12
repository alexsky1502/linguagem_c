#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int matriz[4][4], cont = 0;
    
    srand(time(NULL));

    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = (rand() % 40) - 20;
        }
    }

    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                cont++;
            }
        }
    }
    printf("\n \n %d", cont);
}