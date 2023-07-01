/*Elabore um programa que leia “n” números do teclado e imprima o maior deles. O programa deverá ficar em um laço até o usuário indicar que não deseja mais fornecer nenhum novo número.*/
#include <stdio.h>
int n,maior = -9999;
int main (){
  printf("Digite n numeros e para saber o maior deles digite 0\n");
  while(1){
    scanf("%d",&n);
    if(n > maior){
      maior = n;
    }
    else{
      break;
    }
  }
  printf("Este é o maior entre eles:[%d] \n",maior);

  return 0;
}