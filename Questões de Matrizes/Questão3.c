/*Criar um programa que leia os elementos de uma matriz inteira 4 x 4 e escreva os elementos da
diagonal secundária.
*/

#include <stdio.h>

int A[4][4];

int main(){
  printf("Digite os valores da matriz 4x4 para saber qual sua diagonal secundária: \n");
  for(int i = 0;i < 4;i++)
    for(int j =  0;j < 4;j++)
      scanf("%d",&A[i][j]);

  printf("Esta é a diagonal secundaria: ");
  
  for(int i = 0;i < 4;i++){
     printf("[%d]", A[i][3 - i]);    
  }

  return 0;
}