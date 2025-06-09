/*Faça um programa para calcular a média dos “n” números inteiros positivos, onde “n”é um número lido do teclado (a priori).*/

#include <stdio.h>
int n,soma = 0,denominador = 0;
int main(){
  printf("Digite os 'n' termos inteiros positivos,para ter sua media digiite 0 \n");
    while(1){
      scanf("%d",&n);
      if(n > 0){
        soma += n;
        denominador++;
      }
      else{
        break;
      }
    }
  int media = 0;

  media = (soma/denominador);

  printf("a media desses n numeros eh: %d\n",media);

  return 0;
}