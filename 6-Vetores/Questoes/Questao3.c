/*Escreva um programa que armazene em um vetor o quadrado dos números ímpares no intervalo
fechado de 1 a 20. Após isso, o programa deve imprimir todos os valores armazenados
*/

#include <stdio.h>
#include <math.h>
#define TAMANHO_VETOR 10

int vetor [101],j = 0;

int main() {
    for(int i = 0;i <= 20;i++){
      if(i %2 != 0){
      vetor [j] = pow(i,2);
      j ++;
    }
  }
printf("Valores armazenados no vetor:\n");
for (int i = 0; i < TAMANHO_VETOR; i++) {
    printf("%d ", vetor[i]);
}
printf("\n");
return 0;
}
