//strings are group or set of characters, and real world data like names, phrases and sentences.
#include <stdio.h>
#include <string.h>

void print(char* C);

int main() {
    char C[] = "ALEX"; //or {'A','L','E','X', '\0'}
    printf("size in bytes = %d\n", sizeof(C));
    int len = strlen(C);
    printf("length = %d\n", len);
    print(&C[0]);
}

void print(char* C) { //const char* C -> only read and not write
    int i = 0;
    while (C[i] != '\0') {
        printf("%c", C[i]);
        i++;
    }
    printf("\n");
}