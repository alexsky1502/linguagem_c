#include <stdio.h>
#include <math.h>

double Calcular(int raio);

int main(void) {
    int raio;
    double resultado;
    scanf("%d", &raio);
    resultado = Calcular(raio);
    printf("%lf", resultado);
}

double Calcular(int raio) {
    double volume;
    volume = (4 * 3.1415 * pow(raio, 3))/3.0;
    return volume;
}