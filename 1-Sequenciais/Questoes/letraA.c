//A)Faça um programa que recebe duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda. 
/*
Portugol:

ALGORITMO
INÍCIO
RECEBE REAIS n1 , n2 , r 
LEIA n1 , n2
r ← (n1*2 + n2*3) / 5
ESCREVA r
*/
//Em linguagem C

#include <stdio.h>
float n1 , n2 , n3 , p1 , p2;
int main ()
{
  printf("digite duas notas \n");
  p1 = 2;
  p2 = 3;
  scanf("%f" , &n1);
  scanf("%f" , &n2);
  n3 =  (n1*2 + n2*3) / (p1 + p2);
  printf("%f" , n3);
return 0;
}
