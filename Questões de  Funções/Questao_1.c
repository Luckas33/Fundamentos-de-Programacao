//Impressão de um número natural em base binária.

#include <stdio.h>

void binario(int n);

void binario(int n) {
    int bin[100];
    int i = 0;

    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Número em binário: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite um número para transformá-lo em binário: ");
    scanf("%d", &n);

    binario(n);

    return 0;
}
