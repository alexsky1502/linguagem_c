#include <stdio.h>
void display();

int main()
{
    int a = 1025;
    //int *p; // criando um ponteiro
    //p = &a; // endereço da variavel a
    int *p = &a; //p guarda o endereço da variavel a
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("addres = %d, value = %d\n", p, *p);
    char *p0; // criando um ponteiro que aponta para um tipo char
    p0 = (char*)p; //typecasting. O ponteiro p0 é o mesmo ponteiro p, porém do tipo char, usando apenas 1 byte. 
    // p0 = p
    printf("size of integer is %d bytes\n", sizeof(char));
    printf("addres = %p, value = %d\n", p0, *p0);
    return 0;
}

