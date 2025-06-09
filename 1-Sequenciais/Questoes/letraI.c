/*
i)Faça um programa que recebe o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: • A idade dessa pessoa em anos; • A idade dessa pessoa em meses; • A idade dessa pessoa em dias; • A idade dessa pessoa em semanas;
Portugol:
ALGORITMO
INÍCIO
RECEBE INTEIRO ano_atul , aniversário
ESCREVA digite o ano de seu aniversário e o ano atual
LEIA aniversário , ano_atual
ESCREVA idade em anos,meses,dias e semanas
FIM_ALGORITMO

Linguagem em C
*/

#include <stdio.h>
 int ano_atual, aniversario, idade_anos, idade_meses, idade_dias,idade_semanas;
int main() {
    printf("Digite o ano do seu aniversário e o ano atual:\n");
    scanf("%d %d", &aniversario, &ano_atual);

    idade_anos = ano_atual - aniversario;
    idade_meses = idade_anos * 12;
    idade_dias = idade_anos * 365;
    idade_semanas = idade_dias / 7;

    printf("Idade em anos: %d\n", idade_anos);
    printf("Idade em meses: %d\n", idade_meses);
    printf("Idade em dias: %d\n", idade_dias);
    printf("Idade em semanas: %d\n", idade_semanas);

    return 0;
}
