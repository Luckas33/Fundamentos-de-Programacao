/*K)Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada metro quadrado deve-se usar 18W de potência. Faça um programa que recebe as duas dimensões de um cômodo (em metros), calcule e mostre a sua área e a potência de iluminação que deverá ser utilizada.
Portugol:
ALGORITMO
INÍCIO
DECLARE REAL comprimento, largura, area, potencia_iluminacao
ESCREVA("Digite o comprimento do cômodo em metros: ")
LEIA comprimento
ESCREVA("Digite a largura do cômodo em metros: ")
LEIA largura
area <- comprimento * largura
potencia_iluminacao <- area * 18
ESCREVA("A área do cômodo é ", area, " metros quadrados e a potência de iluminação necessária é de ", potencia_iluminacao, "W.")
FIM_ALGORITMO



Em c
*/

#include <stdio.h>

int main() {
    float dimensao1, dimensao2, area, potencia;

    printf("Digite a primeira dimensao do comodo (em metros): ");
    scanf("%f", &dimensao1);

    printf("Digite a segunda dimensao do comodo (em metros): ");
    scanf("%f", &dimensao2);

    area = dimensao1 * dimensao2;
    potencia = area * 18;

    printf("Area do comodo: %.2f metros quadrados\n", area);
    printf("Potencia de iluminacao necessaria: %.2fW\n", potencia);

    return 0;
}
