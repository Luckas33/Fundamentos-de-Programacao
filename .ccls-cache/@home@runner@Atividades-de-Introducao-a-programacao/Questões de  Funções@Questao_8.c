//Gere o termo de ordem n da série de Fibonacci.

#include <stdio.h>

void fibonnacci(int a, int b, int  c,int n);

void fibonnacci(int a,int b,int c,int n){
    n = n + 4;
    for(;n >= 0;n--){
        c = a + b;
        a = b;
        b = c;
    } 
    printf("[%d]",c);
}



int main(){
    int a = 0,b = 1,c = 0,n;
    printf("Digite quantos termos de fibonnaci deseja ver\n");
    scanf("%d",&n);
    fibonnacci(a,b,c,n);
    
    return 0;
}
