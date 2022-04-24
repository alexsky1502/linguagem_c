#include <stdio.h> //problem when use fgets after scanf, so use fgets BEFORE scanf
/*we can use "%[^\n]%*c" to read a string with blank space*/
#include <String.h>
int main() {
    char nome[50];
    int num, dia, mes, ano;
    //scanf("%[^\n]%*c", &nome);
    scanf("%d%*c", &num);
    fgets(nome, 50, stdin);
    //gets(nome);
    nome[strcspn(nome, "\n")] = 0;
    printf("%s %d\n", nome, num);

    //scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    //printf("%d %d %d", dia, mes, ano);
}