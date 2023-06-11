/*A série de Fibonacci é formada pela seqüência:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que armazene em um vetor os 50 primeiros termos da série de
FIBONACCI. Após isso, o programa deve imprimir todos os valores armazenados.*/

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