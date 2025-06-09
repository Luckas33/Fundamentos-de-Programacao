/*F) Faça um programa que calcule e mostre a área de um quadrado.

Portugol:
ALGORITMO
INÍCIO 
DECLARE REAIS lado , area
ESCREVA (‘digite o valor de um lado de um quadrado’)
LEIA lado
area = lado * lado
ESCREVA area
FIM_ALGORITMO

Em linguagem C:
*/

#include<stdio.h>

int main(){
  float lado, area;
  printf("Insira um dos lados do quadrado!");
  scanf("%f", &lado);
  
  area = lado * lado;
    
  printf("%f", area);

  return 0; 
}
