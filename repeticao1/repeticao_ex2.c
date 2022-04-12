#include <stdio.h>

int main() {
    int number = 34;
    for (int i = 0; i < 35; i ++) {
        printf("%d\n", i);
    }
    while (number < 70) {
        number++;
        printf("%d\n", number);
    }
    do {
        number++;
        printf("%d\n", number);
    }
    while (number < 100);

    return 0;
}