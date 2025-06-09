/* Escreva um programa que leia uma matriz A6x3 com números inteiros e exiba o maior e o menor
elementos.
*/

#include <stdio.h>

int A[6][3],maior = -9999,menor = 9999;

int main(){
printf("Dgite os elementos de uma matriz 6x3 e descubra seu maior e menor elemento\n");
  for(int i = 0;i < 6;i++)
    for(int j = 0;j < 3;j++){
      scanf("%d",&A[i][j]);
      if(A[i][j] > maior){
        maior = A[i][j];
       }
      else if(A[i][j] < menor){
        menor = A[i][j];
       }
    }

printf("O maior e menor elemento sao: [%d] [%d]\n",maior,menor);
  

  return 0;
}