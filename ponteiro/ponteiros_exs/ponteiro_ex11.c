#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    int array[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (array[i]%2 == 0) {
            printf("%d ", &array[i]);
        }
    }
}