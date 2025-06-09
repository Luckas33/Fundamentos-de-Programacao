//Escreva um programa que leia uma cadeia de caracteres (string) que represente o nome completo de uma pessoa e imprima o mesmo nome no formato indicado nos exemplos a seguir. Se a String recebida for “Maria de Sá Santos” o programa deve imprimir “Santos, Maria de Sá” . Se a String recebida for “Pedro de Souza” o programa deve imprimir “Souza, Pedro de”. 
#include <stdio.h>
#include <string.h>

void questao3(char nome[]) {
    char *sobrenome = strrchr(nome, ' ');
    char *primeirosNomes;

    if (sobrenome != NULL) {
        *sobrenome = '\0';
        sobrenome++;
    } else {
        sobrenome = nome;
    }

    primeirosNomes = nome;

    printf("%s, %s\n", sobrenome, primeirosNomes);
}

int main() {
    char nome[100];
    printf("Digite um nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("Nome formatado: ");
    questao3(nome);

    return 0;
}
