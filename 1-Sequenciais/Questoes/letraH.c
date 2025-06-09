/*H)Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.

Portugol:

ALGORITMO
INÍCIO
RECEBE INTEIRO num, num0 , num1 , num2 , num3 , num4 , num5 , num6 , num7 , num8 , num9 , num10;
ESCREVA (“Digite o número da tabuada que você quer ver”)
LEIA num
num0 ← num * 0
num1 ← num * 1
…
num10 ← num * 10
ESCREVA num0,num1,...num10
FIM_ALGORITMO

Em linguagem C (Sem laços de repetição):
*/

#include <stdio.h>

int main() {
  
int num;
  int num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
  printf("Digite o número da tabuada que você quer ver:\n");
  scanf("%d", &num);

  num0 = num * 0;
  num1 = num * 1;
  num2 = num * 2;
  num3 = num * 3;
  num4 = num * 4;
  num5 = num * 5;
  num6 = num * 6;
  num7 = num * 7;
  num8 = num * 8;
  num9 = num * 9;
  num10 = num * 10;

  printf("Tabuada do %d:\n", num);
  printf("%d %d %d %d %d %d %d %d %d %d\n", num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);
printf("%d\n", num10);
  return 0;
}
