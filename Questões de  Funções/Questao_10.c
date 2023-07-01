//Calcule o somatório dos n primeiros números inteiros.

#include <stdio.h>

void soma(int a,int n,int *c);

void soma(int a,int n,int *c){
    while(n > 0){
            *c += a;
            a++;
            n--;
    }
}



int main()
{
    int a = 1,n,c = 0;
    printf("Digite quantos n primeiros numeros naturais seram somados ");
    scanf("%d",&n);
    soma(a,n,&c);
    printf("%d",c);
    
    return 0;
}