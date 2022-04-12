#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[20];
    scanf("%s", &nome);
    for (int i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }
}