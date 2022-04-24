#include <stdio.h>

int main () {
    int i = 0, num = 0;
    while (1) {
        i++;
        if (num == 5) {
            return 0;
        }

        if (i%3 == 0) {
            printf("%d ", i);
            num++;
        }
    }
    return 0;
}