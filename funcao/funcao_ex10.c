#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Calcular(int n1, int n2);

int main(void) {
    int n1, n2, resultado;
    scanf("%d %d", &n1, &n2);
    resultado = Calcular(n1, n2);
    printf("%d", resultado);
}

int Calcular(int n1, int n2) {
    if (n1 > n2) {
        return 1;
    } else {
        return 2;
    }
}