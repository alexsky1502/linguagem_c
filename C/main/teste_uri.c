#include <stdio.h>
#include <math.h>

int main() {
    int dinheiro, atual;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0;
    
    scanf("%d", &dinheiro);

    atual = dinheiro;
    while (atual > 0) {
        if (atual >= 100) {
            nota100 = atual/100;
            atual = atual%100;
        }
        else if (atual >= 50 && atual < 100) {
            nota50 = atual/50;
            atual = atual%50;
        }
        else if (atual >= 20 && atual < 50) {
            nota20 = atual/20;
            atual = atual%20;
        }
        else if (atual >= 10 && atual < 20) {
            nota10 = atual/10;
            atual = atual%10;
            printf("%d %d", nota10, atual);
        }
        else if (atual >= 5 && atual < 10) {
            nota5 = atual/5;
            atual = atual%5;
        }
        else if (atual >= 2 && atual < 5) {
            nota2 = atual/2;
            atual = atual%2;
        }
        else if (atual >= 1 && atual < 2) {
            nota1 = atual/1;
            atual = atual%1;
        }
    }
    printf("%d nota(s) de R$ 100,00\n"
           "%d nota(s) de R$ 50,00\n"
           "%d nota(s) de R$ 20,00\n"
           "%d nota(s) de R$ 10,00\n"
           "%d nota(s) de R$ 5,00\n"
           "%d nota(s) de R$ 2,00\n"
           "%d nota(s) de R$ 1,00\n", nota100, nota50, nota20, nota10, nota5, nota2, nota1);
    return 0;
}