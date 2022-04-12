#include <stdio.h>
#include <string.h>

int main(void) {
    char string1[30] = "apenas testando";
    char string2[30] = "apenas testando5";
    int i = 0;
    while (string1[i] != '\0' || string2[i] != '\0') {
        if (string1[i] == string2[i]) {
            i++;
            ;
        } else {
            return printf("nao sao iguais");
        }
    }
    printf("sao iguais");
}