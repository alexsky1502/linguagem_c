#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    int matriz[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                matriz[i][j] = (2 * i) + (7 * j);
            } else if ( i == j ) {
                matriz[i][j] = (3 * (i * i)) - 1;
            } else {
                matriz[i][j] = (3 * (pow(i, 3))) - 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}