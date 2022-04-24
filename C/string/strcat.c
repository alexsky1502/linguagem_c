#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[100] = "This is", str2[] = " alex";

    //destionation, source. the result is stored in the destionation
    strcat(str1, str2);

    puts(str1);
    puts(str2);
}