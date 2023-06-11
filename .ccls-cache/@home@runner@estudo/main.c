/*1.1.	Escreva um programa que imprima as vinte primeiras potências de dois.

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
*/
/*1.3.	Faça um programa para calcular a média dos “n” números inteiros positivos, onde “n”é um número lido do teclado (a priori).
#include <stdio.h>
int n,soma = 0,denominador = 0;
int main(){
  printf("Digite os 'n' termos inteiros positivos,para ter sua media digiite 0 \n");
    while(1){
      scanf("%d",&n);
      if(n > 0){
        soma += n;
        denominador++;
      }
      else{
        break;
      }
    }
  int media = 0;

  media = (soma/denominador);

  printf("a media desses n numeros eh: %d\n",media);

  return 0;
}
*/
/*1.5.	Elabore um programa que leia “n” números do teclado e imprima o maior deles. O programa deverá ficar em um laço até o usuário indicar que não deseja mais fornecer nenhum novo número.
#include <stdio.h>
int n,maior = -9999;
int main (){
  printf("Digite n numeros e para saber o maior deles digite 0\n");
  while(1){
    scanf("%d",&n);
    if(n > maior){
      maior = n;
    }
    else{
      break;
    }
  }
  printf("Este é o maior entre eles:[%d] \n",maior);

  return 0;
}
*/

/*1.10.	Elabore um programa para automatizar as eleições do Centro Acadêmico do curso de Ciência da Computação. Três alunos estão concorrendo nas eleições: Zé, Gal e Gil. O programa deve contabilizar os votos da seguinte forma: o usuário deverá digitar 1 para votar no Zé, 2 para votar na Gal e  3 para votar na Gil. A eleição deve ser finalizada e o vencedor indicado quando o usuário digitar 0 (Zero).
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
}*/

/*A série de Fibonacci é formada pela seqüência:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que armazene em um vetor os 50 primeiros termos da série de
FIBONACCI. Após isso, o programa deve imprimir todos os valores armazenados.

#include <stdio.h>

int  a = 0,b = 1,c;
int fibo[50];

int main(){
fibo[0] = 0;
  
for(int i = 1;i < 49;i++){
  c = a + b;
  a = b;
  b = c;
  fibo[i] = a;
}
for(int i = 0;i < 49;i++)
  printf("%d\n",fibo[i]);




  return 0;
}
*///

/*Elabore um programa para automatizar as eleições do Centro Acadêmico do curso de Ciência da
Computação. Inicialmente, o programa deverá ler os nomes dos N candidatos nas eleições. O
programa deve contabilizar os votos da seguinte forma: o usuário deverá digitar o nome do candidato.
A eleição deve ser finalizada e o vencedor indicado quando o usuário digitar a palavra “fim”.

#include <stdio.h>

int main() {
    int x, votos;

    printf("Digite o número de candidatos para esta eleição: ");
    scanf("%d", &x);

    char candidatos[x][50];

    printf("Digite o nome dos candidatos:\n");
    for (int i = 0; i < x; i++) {
        scanf("%s", candidatos[i]);
        printf("Candidato número %d é o/a %s;\n", i + 1, candidatos[i]);
    }

    printf("Agora vote no seu candidato de acordo com seu número e para saber o resultado digite '0'\n");

    int votacao[x];
    for (int i = 0; i < x; i++) {
        votacao[i] = 0;
    }

    do {
        scanf("%d", &votos);
        if (votos > 0 && votos <= x) {
            votacao[votos - 1]++;
        }
    } while (votos != 0);

    printf("Resultado da votação:\n");
    for (int i = 0; i < x; i++) {
        printf("Candidato %s: %d votos\n", candidatos[i], votacao[i]);
    }

    return 0;
}
*/
/*Escreva um programa que receba a altura de 10 atletas. Esse programa deve imprimir a altura
daqueles atletas que tem altura maior que a média.

*///
#include <stdio.h>
int numero_atletas = 10;


int media,denominador = 0,soma = 0,x = 0;

int main(){
  float atletas[10];
  printf("Digite a altura dos 10 atletas\n");
  for(int i = 0;i < numero_atletas;i++){
    printf("atleta numero %d  ",i + 1);
    scanf("%f",&atletas[i]);
    soma += atletas[i];
    denominador++;
  }

  media = soma/denominador;
  printf("Estes sao os atletas acima da mediia: \n");
  for(int i = 0;i < numero_atletas;i++)
    if(atletas[i] > media){
      x++;
      printf("%f \n",atletas[x]);
      
    }

  for(int i = 0;i <10;i++)
    


  
  return 0;
}
