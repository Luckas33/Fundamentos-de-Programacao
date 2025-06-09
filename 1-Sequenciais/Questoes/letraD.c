/*D)Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas

Portugol:
ALGORITMO
INÍCIO
DECLARE REAL peso
ESCREVA (‘digite o peso em quilos’)
LEIA peso peso ← peso * 1000
ESCREVA (‘peso em gramas’)
ESCREVA peso
FIM_ALGORITMO

Em linguagem C:
*/

float peso, peso_grama;
#include <stdio.h>
int main()
{
    printf("informe seu peso em kg: ");
    scanf("%f", &peso);

    peso_grama = peso * 1000;

    printf("peso em gramas: %.2f", peso_grama);
}