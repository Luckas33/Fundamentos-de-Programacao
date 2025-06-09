/*Escreva um programa que imprima as “n” primeiras potências de dois. Onde “n” é um número lido do teclado (a priori).*/

#include <stdio.h>
#include <math.h>

int main() {
  int a, b, i, c;

  scanf("%d", &c);

  for (i = 1; i <= c; i++) {
    a = 2;
    b = pow(a, i);
    printf("%d\n", b);
  }

  return 0;
}
