/*8. Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor ´
lido.*/

#include <stdio.h>

int main() {
    double num, menor = 0, maior = 0;
    for (int i = 0; i < 10; i++){
        if (i == 0) {
            scanf("%lf", &num);
            maior = num;
            menor = num;
        }
        else {
            scanf("%lf", &num);
        }

        if (num < menor) {
            menor = num;
        }
        else if (num > maior) {
            maior = num;
        }
    }

    printf("maior eh o %lf e o menor eh o %lf", maior, menor);
}