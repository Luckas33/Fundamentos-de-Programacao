/*G) Faça um programa que recebe o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário recebe.
Portugol:
ALGORITMO
INÍCIO 
DECLARE REAIS salario minimo, salario_funcionário, quantidadesalario minimo
ESCREVA (‘digite o seu salário,e o salário mínimo ’)
LEIA salário  minimo
quantidadeSalariosMinimos = salarioFuncionario / salarioMinimo;
ESCREVA quanidadesalarioMiniMos
FIM_ALGORITMO




Linguagem em C
*/
#include <stdio.h>

int main() {
    float salarioMinimo, salarioFuncionario, quantidadeSalariosMinimos;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salarioFuncionario);

    quantidadeSalariosMinimos = salarioFuncionario / salarioMinimo;

    printf("O funcionário recebe %.2f salários mínimos.\n", quantidadeSalariosMinimos);

    return 0;
}
