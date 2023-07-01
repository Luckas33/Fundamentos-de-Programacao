//Gere a série de Fibonacci até o termo de ordem n.

#include <stdio.h>

void fibonnacci(int a, int b, int  c,int n);

void fibonnacci(int a,int b,int c,int n){
    printf("[%d]",c);
    c++;
    for(;n > 0;n--){
        printf("[%d]",c);
        c = a + b;
        a = b;
        b = c;
    }
}



int main(){
    int a = 0,b = 1,c = 0,n;
    printf("Digite quantos termos de fibonnaci deseja ver\n");
    scanf("%d",&n);
    fibonnacci(a,b,c,n);
    
    return 0;
}

