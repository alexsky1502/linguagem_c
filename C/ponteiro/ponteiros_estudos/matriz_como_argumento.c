#include <stdio.h>
#include <stdlib.h>

//B and *B are both returning us pointers, the difference is that B is returning a pointer to a
//one dimensional array of three integers while *B is returning a pointer to an integer

// void Func(int (*A)[3]) { //or A[][3]

// }

int main(void) {
    int matriz[2][3] = {{1,3,0}, {-1,-2,-3}};
    int (*p)[3] = matriz; //outra forma de criar um ponteiro //declaring pointer to 1-d array of 3 integers
    printf("%d\n", matriz); //&matriz[0] retorna o endereço representa a primeira lista
    printf("%d\n", *matriz); //matriz[0] ou &matriz[0][0] representa o primeiro pedacõ da primeira lista
    printf("%d\n", matriz+1); //&matriz[1] addres + size of 1-d array of 3 integers
    printf("%d\n", *(matriz+1));//matriz[1] ou &matriz[1][0]
    printf("%d\n", *(matriz+1) + 2);//matriz[1] + 2 or &matriz[1][2]
    printf("%d\n", *(*matriz+1));
    printf("%d\n", **matriz);
    // three multidimensional array
    //int (*P)[2][2] = C; //pointer to a two dimensional array of integers of size two cross two
    
    //print c //800
    //print *c or c[0] or &c[0][0] //800
    //print *(c[0][1]+1) or c[0][1][1] //9
    //print *(c[1]+1) or c[1][1] or &c[1][1][0] //824
    
}