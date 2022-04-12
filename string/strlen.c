#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char a[20] = "program";
    char b[20] = {'P','r','o','g','r','a','m','\0'};

    //using the %zu format specifier to print size_t
    printf("%zu\n", strlen(a));
    printf("%zu", strlen(b));
}