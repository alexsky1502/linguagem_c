#include <stdio.h>
int Soma(int a, int b);

int main(void) {

    int a, b, sum;
    printf("digite um numero: ");
    scanf("%d %d", &a, &b);

    sum = Soma(a,b);
    printf("a soma deu = %d", sum);

    return 0;
}

int Soma(int a, int b){
    int result;
    result = a + b;
    return result;
}