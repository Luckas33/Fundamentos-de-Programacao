/*Escreva um programa que leia “n” números inteiros do teclado e imprima o produto deles. O programa deverá ficar em um laço até o usuário indicar que não deseja mais fornecer nenhum novo número.*/

#include <stdio.h>

int n,p;

int main() {
  printf("digite n números para saber o produto deles e digite 0 para parar a operação:\n ");
p = 1;

while (1) {
  printf("Digite um número:\n");
    scanf("%d", &n);
    if(n == 0){
      break;
    }
    p *= n;
  }
  printf("%d\n",p);
   return 0;
}

