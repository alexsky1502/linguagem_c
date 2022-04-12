#include <stdio.h>
void display();

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("digite um valor ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

