//Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA.

#include <stdio.h>

void gerarCombinacoes(char letras[], int n, char combinacao[], int posicao);
void imprimirCombinacoes(char combinacao[], int n);

void gerarCombinacoes(char letras[], int n, char combinacao[], int posicao) {
    if (posicao == n) {
        imprimirCombinacoes(combinacao, n);
        return;
    }

    for (int i = 0; i < n; i++) {
        combinacao[posicao] = letras[i];
        gerarCombinacoes(letras, n, combinacao, posicao + 1);
    }
}

void imprimirCombinacoes(char combinacao[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", combinacao[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    char letras[n];
    for (int i = 0; i < n; i++) {
        letras[i] = 'A' + i;
    }

    char combinacao[n];
    gerarCombinacoes(letras, n, combinacao, 0);

    return 0;
}
