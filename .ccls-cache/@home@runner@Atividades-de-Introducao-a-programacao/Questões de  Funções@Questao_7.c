//Gere todas as possíveis combinações para um jogo da MegaSena com 6 dezenas.

#include <stdio.h>

void gerarCombinacoes(int numeros[], int tamanho, int combinacao[], int posicao);
void processarCombinacao(int combinacao[], int tamanho);

void gerarCombinacoes(int numeros[], int tamanho, int combinacao[], int posicao) {
    if (posicao == tamanho) {
        processarCombinacao(combinacao, tamanho);
        return;
    }

    for (int i = 0; i < 60; i++) {
        combinacao[posicao] = numeros[i];
        gerarCombinacoes(numeros, tamanho, combinacao, posicao + 1);
    }
}

void processarCombinacao(int combinacao[], int tamanho) {
    // Aqui você pode fazer o processamento desejado com a combinação gerada
    // Por exemplo, você pode salvá-la em um arquivo, realizar cálculos, etc.
    // Neste exemplo, vamos apenas imprimir a combinação

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", combinacao[i]);
    }
    printf("\n");
}

int main() {
    int numeros[60];
    for (int i = 0; i < 60; i++) {
        numeros[i] = i + 1;
    }

    int tamanho = 6;
    int combinacao[tamanho];
    gerarCombinacoes(numeros, tamanho, combinacao, 0);

    return 0;
}

