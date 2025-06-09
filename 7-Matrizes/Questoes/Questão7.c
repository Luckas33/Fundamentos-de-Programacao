/*Crie um programa que leia uma matriz A3x2 e uma matriz B2x5, calcule o produto, armazenando
numa matriz C, apresentando-a na tela.
*/

#include <stdio.h>

int A[3][2],B[2][5],C[3][5];
int soma,i,j,k;

int main(){
  printf("Digite os elementos da matriz A3x2\n");
  for(i = 0;i < 3;i++)
    for(j = 0;j < 2;j++)
      scanf("%d",&A[i][j]);
  
  printf("Digite os elementos da matriz B2x5\n");
    for(i = 0;i < 3;i++)
      for(j = 0;j < 2;j++)
        scanf("%d",&A[i][j]);

  for(i = 0;i < 3;i++)
    for(k = 0;k < 5;k++){
      soma = 0;
    for(j = 0;j < 2;j++)
      soma = soma + (A[i][j] * B[i][j]);
      C[i][k] = soma;
  }
  printf("Este é o inverso da matriz: \n");
  for(i = 0;i < 3;i++)
    for(j = 0;j < 5;j++)
      printf("[%d] \n",C[i][j]);



  return  0;
}