/*Escreva um programa que leia uma matriz A3x3 e calcule o seu determinante*/

#include <stdio.h>

int A[3][3],B[3][5];
int prod1 = 1,prod2 = 1,prod3 = 1,det,i,j;

int main(){
  for(i = 0;i < 3;i++)
    for(j = 0;j < 3;j++){
      scanf("%d",&A[i][j]);
      B[i][j] = A[i][j];
    }
  j = 4;

  for(i = 0;i < 3;i++){
    B[i][j] = A[i][j - 3];
    B[i][j + 1] = A[i][j - 2];
  }

  for(i = 0;i < 3;i++){
    prod1 = prod1 * B[i][i];
    prod2 = prod2 * B[i][i + 2];
    prod3 = prod3 * B[i][i + 3];
  }

  det = prod1 + prod2 + prod3;
  prod1 = 1,prod2 = 1,prod3 = 1;
  
  for(i = 0;i < 3;i++){
    prod1 = prod1 * B[i][4 - i];
    prod2 = prod2 * B[i][5 - i];
    prod3 = prod3 * B[i][6 - i];
  }

  det = det - (prod1 + prod2 + prod3);
  printf("%d",det);

  return 0;
}