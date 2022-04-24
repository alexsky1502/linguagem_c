#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> // fzr ex 51

int Impressao(int lista[10]);
int Inverso(int lista[10]);
double Media(int lista[10]);

int main(void) {
    int lista[10], opcao, ok;
    double resultado;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        lista[i] = (rand() % 50) - 25;
    }

    while (1) {
        scanf("\n%d", &opcao);
        if (opcao == 1) {
            ok = Impressao(lista);
        } else if (opcao == 2) {
            ok = Inverso(lista);
        } else if (opcao == 3) {
            resultado = Media(lista);
            printf("%0.2lf", resultado);
        } else {
            return 1;
        }
    }
}

int Impressao(int lista[10]) {
    for (int i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    return 1;
}

int Inverso(int lista[10]) {
    for (int i = 9; i >= 0; i--) {
        printf("%d ", lista[i]);
    }
    return 1;
}

double Media(int lista[10]) {
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        soma = soma + lista[i];
    }
    printf("%d\n", soma);
    return soma/10.0;
}
