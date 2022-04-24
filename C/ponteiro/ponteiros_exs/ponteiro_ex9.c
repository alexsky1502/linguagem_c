#include <stdio.h>
#include <stdlib.h>

void endMatriz(float (*matriz)[3]);

int main(void) {
    float matriz[3][3] = {{1.0,2.0,3.0}, {4.0,5.0,6.0}, {7.0,8.0,9.0}};
    endMatriz(matriz);
}

void endMatriz(float (*matriz)[3]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            printf("%d ", &matriz[i][j]);
        }
        printf("\n");
    }
}