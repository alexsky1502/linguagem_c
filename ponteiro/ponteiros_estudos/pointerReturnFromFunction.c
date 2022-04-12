//pointers as function returns
#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld() {
    printf("Hello World\n");
}

int* Add(int* a, int* b){
    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main(void) {
    int a = 2, b = 4;
    int* ptr = Add(&a, &b);
    PrintHelloWorld();
    printf("sum = %d\n", *ptr);
}