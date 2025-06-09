/*Escreva um programa que receba a altura de 10 atletas. Esse programa deve imprimir a altura
daqueles atletas que tem altura maior que a média.
*/
#include <stdio.h>
#define TAMANHO_VETOR 10
int vetor [10];
float media = 0.0;


int main() {
  for(int i = 0;i < TAMANHO_VETOR;i++){
    printf("Digite a altura do jogador %d ", i + 1);
    scanf("%d", &vetor[i]);
    media += vetor[i];
  }
media /= TAMANHO_VETOR;
printf("Jogadores maiores do que a média de altura: ");
for (int i = 0; i < TAMANHO_VETOR; i++) {
    if (vetor[i] > media) {
    printf("[%d] ", vetor[i]);
  }
}
return 0;
}