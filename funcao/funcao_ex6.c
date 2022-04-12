#include <stdio.h>
#include <stdlib.h>

int Calcular(int horas, int minutos, int segundos);

int main(void) {
    int horas, minutos, segundos, resposta;
    printf("horas minutos segundos: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    resposta = Calcular(horas, minutos, segundos);
    printf("%d", resposta);
}

int Calcular(int horas, int minutos, int segundos) {
    int total;
    total = horas*3600 + minutos*60 + segundos;
    return total;
}