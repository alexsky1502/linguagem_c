#include <stdio.h>

int main(void) {
    char nome[20];
    scanf("%s", &nome);

    int i = 0;
    while (nome[i] != '\0') {
        i++;
    }

    printf("%d", i);
}