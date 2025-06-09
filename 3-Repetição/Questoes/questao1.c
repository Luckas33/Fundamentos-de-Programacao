/*1.1.	Escreva um programa que imprima as vinte primeiras potências de dois.*/

#include <stdio.h>
#include <math.h>

int pot = 0,a = 0;
int main(){
printf("Estas sao as 20 primeiras potencias de 2: \n");
  for(int i = 0;i < 20;i++){
    pot = pow(2,i);
    printf("%d\n",pot);
  }
  
  return 0;
}