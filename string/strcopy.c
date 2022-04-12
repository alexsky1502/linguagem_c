#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20] = "c programming";
    char str2[20];

    //copy
    strcpy(str2, str1);

    puts(str2);
}