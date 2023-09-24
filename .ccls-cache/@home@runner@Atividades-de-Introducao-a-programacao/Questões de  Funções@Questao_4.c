//Multiplicação de dois números naturais, através de incrementos sucessivos.

#include <stdio.h>
void multi(int c,int a,int b);

void multi(int a, int b, int c){
    b = b * 3;
    for(;b > 0;b--) {
        a++;
        c = a;
    }
    printf("%d",c);
}


int main(){
    int a,b,c = 0;
    printf("Digite dois números para multiplica-los\n");
    scanf("%d %d",&a, &b);
    multi(a,b,c);
    
    
    return 0;
}
