/*Elabore um programa para automatizar as eleições do Centro Acadêmico do curso de Ciência da
Computação. Inicialmente, o programa deverá ler os nomes dos N candidatos nas eleições. O
programa deve contabilizar os votos da seguinte forma: o usuário deverá digitar o nome do candidato.
A eleição deve ser finalizada e o vencedor indicado quando o usuário digitar a palavra “fim”.*/

#include <stdio.h>

int main() {
    int x, votos;

    printf("Digite o número de candidatos para esta eleição: ");
    scanf("%d", &x);

    char candidatos[x][50];

    printf("Digite o nome dos candidatos:\n");
    for (int i = 0; i < x; i++) {
        scanf("%s", candidatos[i]);
        printf("Candidato número %d é o/a %s;\n", i + 1, candidatos[i]);
    }

    printf("Agora vote no seu candidato de acordo com seu número e para saber o resultado digite '0'\n");

    int votacao[x];
    for (int i = 0; i < x; i++) {
        votacao[i] = 0;
    }

    do {
        scanf("%d", &votos);
        if (votos > 0 && votos <= x) {
            votacao[votos - 1]++;
        }
    } while (votos != 0);

    printf("Resultado da votação:\n");
    for (int i = 0; i < x; i++) {
        printf("Candidato %s: %d votos\n", candidatos[i], votacao[i]);
    }

    return 0;
}