#include <stdio.h>

int main() {
    float teste_input;
    /* printar algo na tela*/
    printf("good evening, World!\n");
    /*variaveis*/
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("\n%d", a);
    /*input*/
    printf("\nDigite um numero float: ");
    scanf("%d", &teste_input);
    printf("Number = %f", teste_input);
    /*arredondar numeros*/
    /*area = roundf(area * 100) /100; se eu quiser usar esse valor para contas futuras*/
    /*printf("A=%0.4lf\n", area); se eu quiser apenar arredondar para imprimir, entao esse caminho eh o certo*/
    /*if else*/
    if (a == 1 || a == 2) {
        printf("okay");
    }
    else if (b == 1 || b == 2) {
        printf("okay2");
    }
    else {
        printf("not okay");
    }
    /*for loop*/
    int i, sum = 0;
    for (i = 0; i < a; ++i){
        sum += b;
    }
    printf("%i", sum);
    /*while loop & do while*/
    int a, b, i, sum = 0;
    printf("first scan ");
    scanf("%i", &a);
    while (a == 0) {
        printf("validacao a = ");
        scanf("%i", &a);
    }
    scanf("%i", &b);
    do {
        printf("validacao b = ");
        scanf("%i", &b);
    }
    while (b == 0);
    for (i = 0; i < a; ++i){
        sum += b;
    }
    printf("%i", sum);
    /*switch case*/
    char operador;
    printf("digite um operador: ");
    scanf("%c", &operador);
    switch (operador){
        case '+':
            printf("soma");
            break;
        case '-':
            printf("menos");
            break;
        case '/':
            printf("divisao");
            break;
        case '%':
            printf("modulo");
            break;
        case '*':
            printf("multiplicacao");
            break;
        
        default:
            printf("nao existe esse operador na lista");
    }
    return 0;
    /*goto statment*/
    int a, b;
    printf("digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (a > b){
        goto jump;
    }
    else {
        printf("%d", a + b);
    }
    return 0;

jump:
    printf("jump go okay");
}