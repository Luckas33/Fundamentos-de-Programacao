//Multiplicação de dois números naturais, através de somas sucessivas (Ex.: 6 ∗ 4 = 4 + 4 + 4 + 4 + 4 + 4).

#include <stdio.h>
void multiplicacao(int c,int a,int b);

void multiplicacao(int a, int b, int c){
    for(;b > 0;b--){
        c += a;
        
    }
    printf("%d",c);
}


int main(){
    int a,b,c = 0;
    printf("Digite dois números para multiplica-los\n");
    scanf("%d %d",&a, &b);
    multiplicacao(a,b,c);
    
    
    return 0;
}
