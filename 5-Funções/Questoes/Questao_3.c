//Soma de dois números naturais, através de incrementos sucessivos. 

#include <stdio.h>
void soma(int c,int a,int b);

void soma(int a, int b, int c){
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
    soma(a,b,c);
    
    
    return 0;
}
