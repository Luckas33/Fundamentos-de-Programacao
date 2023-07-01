// Calcule a soma de todos os valores de um array de reais.
#include <stdio.h>

void soma(int array[],int c,int n);

void soma(int array[],int c,int n){
    for(int i = 0;i < n;i++){
         c += array[i];}
         printf("%d\n",c);
}
    


int main(){
    int a,n,c = 0;
    
    printf("Digite a quantidade de numeros que deseja soma-los \n");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i < n;i++){
        printf("Numero [%d/%d]\n",i + 1,n);
        scanf("%d",&array[i]);
    }
    soma(array,c,n);
    
    
    return 0;
}
