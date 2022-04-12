#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> // fzr ex 51

int Impressao(int* lista, int size);
int Inverso(int* lista, int size);
int Media(int* lista, int size);

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
            ok = Impressao(lista, 10);
        } else if (opcao == 2) {
            ok = Inverso(lista, 10);
        } else if (opcao == 3) {
            resultado = Media(lista, 10);
        } else {
            return 1;
        }
    }
}

int Impressao(int* lista, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", lista[i]);
    }
    return 1;
}

int Inverso(int* lista, int size) {
    for (int i = 9; i >= size; i--) {
        printf("%d ", lista[i]);
    }
    return 1;
}

int Media(int* lista, int size) {
    double soma = 0;
    for (int i = 0; i < size; i++) {
        soma += lista[i];
    }
    printf("%lf\n", soma);
    printf("%lf\n", soma/10.0);
}
