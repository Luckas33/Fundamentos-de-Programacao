/*e)Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que A=((base maior + base menor) * altura)/2.

Portugol:
ALGORITMO 
INÍCIO 
RECEBA base_maior , base_menor , altura , area 
ESCREVA (‘digite o valor de base menor,base maior e altura’) 
LEIA base_1 , base_2 , altura 
áreaT ← ((base_1 + base_2) * altura) / 2
ESCREVA area
FIM_ALGORITMO

Em liguagem C:
*/

#include <stdio.h>
float base_maior , base_menor , area , h;
int main ()
{
printf("digite o valor da base maior,menor e a altura\n");
scanf("%f" , &base_maior);
scanf("%f" , &base_menor); 
scanf("%f" , &h);
area = ((base_maior + base_menor)*h) / 2;
printf("valor da área:  %.1f" , area);

return 0;
}
