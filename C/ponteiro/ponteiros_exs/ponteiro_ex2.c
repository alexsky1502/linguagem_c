#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int *p1 = &a;
    int *p2 = &b;

    if (p1 > p2) {
        printf("a eh maior, %d\n", p1);
        printf("%d", p2);
    } else {
        printf("b eh maior, %d\n", p2);
        printf("%d", p1);
    }
}