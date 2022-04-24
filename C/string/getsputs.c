#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[30];
    printf("Enter name: ");
    gets(name);     //Function to read string from user.
    printf("Name: ");
    puts(name);    //Function to display string.
    return 0;
}