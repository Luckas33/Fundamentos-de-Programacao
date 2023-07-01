 //Implemente uma função recursiva que, dados dois números inteiros x e n, calcula o valor de x * n.

#include <stdio.h>

void multi(int a,int b, int c);

void multi(int a,int b, int c){
    if(b > 0){
        c +=a; 
        b--;
    multi(a,b,c);}
    else{
       printf("%d",c);
    }
    
}

int main(){
    int a,b,c = 0;
    printf("Digite dois números para multiplica-los\n");
    scanf("%d %d",&a , &b);
    multi(a,b,c);
    return 0;
}
