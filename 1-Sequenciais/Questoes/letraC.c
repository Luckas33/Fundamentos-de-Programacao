/*c)Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.

Portugol:
ALGORITMO
INÍCIO
DECLARE salário , salário_final , vendas 
ESCREVA (‘digite o valor do salário e de vendas’) 
LEIA salário , vendas 
vendas ← vendas * 0,04 
salário_final ← salário + vendas 
ESCREVA vendas , salário_final 
FIM_ALGORITMO

Em linguagem C:
*/
#include <stdio.h>

float salario , vendas , salario_final;
int main(void) {
  
  printf("salário fixo:  \n");
  scanf("%f", &salario);
  
  printf("Vendas:  \n");
  scanf("%f", &vendas);

  salario_final = (vendas * 0,04) + salario;
  printf("%.2f" , salario_final);

  return 0;
}
