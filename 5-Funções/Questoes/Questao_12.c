//Encontre o maior elemento de um array de inteiros.

#include <stdio.h>

void maior(int array[], int n);

void maior(int array[], int n) {
    int maiorr = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] > maiorr) {
            maiorr = array[i];
        }
    }
    printf("O maior número é: %d\n", maiorr);
}

int main() {
    int n;
    
    printf("Digite a quantidade de números que deseja verificar:\n");
    scanf("%d", &n);
    
    int array[n];
    
    for (int i = 0; i < n; i++) {
        printf("Número [%d/%d]:\n", i + 1, n);
        scanf("%d", &array[i]);
    }
    
    maior(array, n);
    
    return 0;
}
