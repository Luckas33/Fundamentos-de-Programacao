/*Escreva um programa que armazene em um vetor todos os números inteiros de 200
a 100 (em ordem decrescente). Após isso, o programa deve imprimir todos os
valores armazenados.*/

#include <stdio.h>
#define TAMANHO_VETOR 101

int vetor[101], j = 0;

int main() {
  for (int i = 200; i >= 100; i--) {
    vetor[j] = i;
    j++;
  }
  printf("Valores armazenados no vetor:\n");

  for (int i = 0; i < TAMANHO_VETOR; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}