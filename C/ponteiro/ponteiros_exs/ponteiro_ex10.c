#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {
    int array[5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        array[i] = (rand() % 50) - 25;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", (array[i]));
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        int *p = &array[i];
        printf("%d ", (*p)*2);
    }
}