/*Elabore um programa para automatizar as eleições do Centro Acadêmico do curso de Ciência da Computação. Três alunos estão concorrendo nas eleições: Zé, Gal e Gil. O programa deve contabilizar os votos da seguinte forma: o usuário deverá digitar 1 para votar no Zé, 2 para votar na Gal e  3 para votar na Gil. A eleição deve ser finalizada e o vencedor indicado quando o usuário digitar 0 (Zero).*/
#include <stdio.h>

int ze = 0,gal = 0,gil = 0,voto;

int main(){
  printf("Digite 1 para votar no ZE \n");
  printf("Digite 2 para votar no GAL \n");
  printf("Digite 3 para votar no GIL \n");
  printf("Digite 0 para saber o resultado \n");

  while(1){
    scanf("%d",&voto);
    if(voto == 1){
      ze++;
    }
    else if(voto == 2)
      gal++;
    else if(voto == 3)
      gil++;  
    else
      break;

  }

  if(ze > gal || ze > gil)
    printf("O vencer foi ZE com %d votos\n",ze);
  else if(gal > ze || gal > gil)
    printf("O vencer foi GAL com %d votos\n",gal);
  else
    printf("O vencer foi GIL com %d votos\n",gil);
    
  return 0;
}