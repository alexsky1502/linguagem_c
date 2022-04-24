#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], sexo[20];
    int idade;
    scanf("%s %s %d", &nome, &sexo, &idade);

    if ((strcmp(sexo, "feminino") == 0) && (idade < 25)) { //para comparar temos que comparar cada um, pois eh uma array
    //Since strings are just arrays, you need to compare each character
        printf("aceita");
    } else {
        printf("nao aceita");
    }
}