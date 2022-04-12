#include <stdio.h>
#include <stdlib.h>

double Calcular(double celsius);

int main(void) {
    double celsius, resultado;
    scanf("%lf", &celsius);
    resultado = Calcular(celsius);
    printf("%lf", resultado);
}

double Calcular(double celsius){
    double fah;
    fah = (celsius * (9.0/5.0)) + 32.0;
    return fah;
}