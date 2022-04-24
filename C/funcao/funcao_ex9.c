#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Calcular(double altura, double raio);

int main(void) {
    double altura, raio, resultado;
    scanf("%lf %lf", &altura, &raio);
    resultado = Calcular(altura, raio);
    printf("%lf", resultado);
}

double Calcular(double altura, double raio) {
    double volume;
    volume = 3.141592 * pow(raio, 2) * altura;
    return volume;
}