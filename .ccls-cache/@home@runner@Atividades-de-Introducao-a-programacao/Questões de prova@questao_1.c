//QUESTÃO 2 DA PROVA
//Em portugol
/*
ALGORITMO
DECLARE imp,raiz,n,sub NUMERICO
imp ← 1,sub ← 0

ESCREVA "Digite um numero para saber sua raiz"
LEIA raiz
SE raiz < 0 ENTAO
INICIO
  ESCREVA"ERRO"
  FIM_ALGORITMO
FIM
n ← raiz

ENQUANTO raiz > 0 FAÇA
    raiz ← raiz - (imp)
    imp ← imp + 2
    sub ← sub + 1
FIM_ENQUANTO

SE raiz < 0 ENTAO
  ESCREVA "ESSA É A RAIZ DE ", n ,"que é aproximadamente", raiz 
SENAO
  ESCREVA "ESSA É A RAIZ DE ", n ,"que é exatamente", raiz 
FIM

FIM_ALGORITMO
*/
//Em C
#include <stdio.h>
int sub = 0,imp = 1,raiz,a = 0,n;
int main(void) {
  printf("Digit um numero para saber sua raiz\n");
  scanf("%d",&raiz);
  if(raiz < 0){
    printf("erro");
    return 0;
  }
  n = raiz;

  while(raiz > 0){
    raiz = raiz - (imp);
    imp = imp + 2;
    sub++;
  }
  if(raiz < 0 ){
    printf("Raiz de %d é igual a aproximadamente %d",n,sub);
  }
  else{
  printf("Raiz de %d é exatamente %d",n,sub);
  }
  return 0;
}