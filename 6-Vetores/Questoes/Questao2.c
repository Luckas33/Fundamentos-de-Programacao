/*Escreva um programa que armazene em um vetor todos os números múltiplos de 5, no intervalo
fechado de 1 a 500. Após isso, o programa deve imprimir todos os valores armazenados.*/

#include <stdio.h>
#define TAMANHO_VETOR 101
int vetor [101],j = 0;
int main() {
    for(int i = 0;i <= 500;i++){
      if(i %5 == 0){
        vetor [j] = i;
        j++;
      }
    }
  
printf("Valores armazenados no vetor:\n");
for (int i = 0; i < TAMANHO_VETOR; i++) {
    printf("%d ", vetor[i]);
}
  
printf("\n");
return 0;
}
