#include <stdio.h>
#include <stdlib.h>

void endArray(float *array, int size);

int main(void) {
    float array[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    int size = sizeof(array)/sizeof(array[0]);
    endArray(array, size);
}

void endArray(float *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", array+i);
    }
}