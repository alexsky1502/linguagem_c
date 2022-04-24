#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Calcular(int a, int b);

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    double resultado;
    resultado = Calcular(a, b);
    printf("%lf", resultado);
}

double Calcular(int a, int b) {
    double resposta;
    resposta = sqrt(pow(a,2)+pow(b,2));
    return resposta;
}