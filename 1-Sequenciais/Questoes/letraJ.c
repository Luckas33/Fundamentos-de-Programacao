/*J)Faça um programa que recebe uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit.

Portugol:
ALGORITMO
INÍCIO
RECEBE INTEIRO ano_atul , aniversário
ESCREVA digite o ano de seu aniversário e o ano atual
LEIA aniversário , ano_atual
ESCREVA idade em anos,meses,dias e semanas
FIM_ALGORITMO

*/
#include <stdio.h>
int main()
{
    float temperatura_celsius, temperatura_fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);

    temperatura_fahrenheit = (temperatura_celsius * 1.8) + 32;

    printf("A temperatura em Fahrenheit é: %.2f", temperatura_fahrenheit);
    return 0;
}
