//Um palíndromo é uma palavra que se pode ler tanto da esquerda para a direita como da direita para a esquerda. Alguns exemplos: arara, esse, ovo, rodador, sopapos. Escreva um programa que leia uma cadeia de caracteres (string) e indique (imprime) se a cadeia é ou não um palíndromo. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palindromo[100];
    
    printf("Escreva uma palavra para saber se ela é um palíndromo:\n");
    fgets(palindromo, sizeof(palindromo), stdin);

    int inicio = 0;
    int fim = strlen(palindromo) - 1;

    while (inicio < fim) {
        if (!isalpha(palindromo[inicio])) {
            inicio++;
            continue;
        }
        if (!isalpha(palindromo[fim])) {
            fim--;
            continue;
        }
        if (tolower(palindromo[inicio]) != tolower(palindromo[fim])) {
            printf("Não é um palíndromo\n");
            return 0;
        }
        inicio++;
        fim--;
    }

    printf("É um palíndromo\n");

    return 0;
}
