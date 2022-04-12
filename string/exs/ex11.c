#include <stdio.h>
#include <string.h>

void Vogais(char* frase);

int main(void) {
    char frase[100];
    fgets(frase, 100, stdin); //nao usar scanf = ele pega o input ateh encontrar o branco
    //why %s does not print the string after it encounters a space character?
    //scanf only read till it gets to space that is why it is not storing after the first space , 
    //so your printf function is not faulty , it is the scanf that is not storing the complete 
    //string , stopping on encountering first space.
    //https://stackoverflow.com/questions/41879626/why-s-does-not-print-the-string-after-it-encounters-a-space-character/41879998#41879998
    Vogais(&frase[0]);
}

void Vogais(char* frase) {
    int i = 0;
    while (frase[i] != '\0') {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == ' ') {
            ;
        } else {
            printf("%c", frase[i]);
        }
        i++;
    }
}