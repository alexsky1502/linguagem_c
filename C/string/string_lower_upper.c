#include <string.h>
#include <stdio.h>

int main(void) {
    char name[20] = "alex";
    char last[50] = "SE YOON KOO";

    printf("%s\n", strlwr(last));
    printf("%s\n", strupr(name));
}