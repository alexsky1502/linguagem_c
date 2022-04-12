#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 

int** criarMatriz() {
    srand(time(NULL));
    int **matriz = (int **)malloc(2 * sizeof(int *)); //aloca espaço para cada linha primeiro
    int row;

    // for each row allocate Cols ints
    for (row = 0; row < 2; row++) {  //aloca espaço em cada linha, a quantidade de colunas
        matriz[row] = (int *)malloc(3 * sizeof(int));
    }

    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = (rand() % 50) - 25;
        }
    }

    return matriz;
}

void free_board(int **board, int Rows) 
{
    int row;

    // first free each row
    for (row = 0; row < Rows; row++) {
         free(board[row]);
    }

    // Eventually free the memory of the pointers to the rows
    free(board);
}

int main(void) {
    int** matriz = criarMatriz();
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    free_board(matriz, 2);
}