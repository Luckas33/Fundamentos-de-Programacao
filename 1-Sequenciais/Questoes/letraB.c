/*b) Faça um programa que recebe o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.

Portugol:
ALGORITIMO 
INÍCIO
DECLARE REAL preço 
ESCREVA (‘digite o valor do produto’) 
LEIA preço 
preço ← preço * 0,90 
ESCREVA preço 
FIM_ALGORITMO


Em linguagem C:
*/
#include <stdio.h>
float preço , desconto;
int main()
{
printf("Escreva o preço do produto\n");
scanf("%f" , &preço);
desconto = preço * 0.90;
printf("%f" , desconto);
return 0;
}
