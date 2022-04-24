#include <stdio.h>

int Verificar(int numero);

int main(void) {
    int numero, resultado;

    printf("dizer um numero\n");
    scanf("%d", &numero);

    resultado = Verificar(numero);

    printf("%d", resultado);
}

int Verificar(int numero) {
    if (numero > 0) {
        return 1;
    } else if (numero < 0) {
        return -1;
    } else {
        return 0;
    }
}