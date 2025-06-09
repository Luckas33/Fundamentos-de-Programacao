// Faça um programa que leia o código, a descrição, o valor e a quantidade em estoque de 10 produtos comercializados por uma papelaria. Essas informações devem ser armazenadas em um registro do tipo vetor em ordem crescente de código. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>


struct papelaria{
    int codigo;
    char description[1000];
    float price;
    int stock;
};
int n;
int main(){
    printf("Digite o codigo,descricao,valor e quantidade de n produtos de uma papelaria\n");
    printf("quantos produtos serao?");
    scanf("%d",&n);
    struct papelaria produto[n];


    for(int i = 0;i < n;i++){
        printf("Produto [%d/%d]",i + 1,n);
        printf("\n");


        printf("Digite o codigo deste produto:\n");
        scanf("%d",&produto[i].codigo);
        getchar();


        printf("Digite a descricao deste produto:\n");
        fgets(produto[i].description,sizeof(produto[i].description),stdin);
       


        printf("Digite o valor deste produto\n");
        scanf("%f",&produto[i].price);
        getchar();


        printf("Digite a quantidade em estoque:\n");
        scanf("%d",&produto[i].stock);
    }
   struct papelaria temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (produto[i].codigo > produto[j].codigo) {
                temp = produto[i];
                produto[i] = produto[j];
                produto[j] = temp;
            }
        }
    }
    for(int i = 0;i < n;i++){
        printf("produtos em ordem crescente[%d/%d]\n",i+1,n);
        printf("Codigo: %d\n", produto[i].codigo);
        printf("Descricao: %s\n", produto[i].description);
        printf("Valor: %.2f\n", produto[i].price);
        printf("Quantidade em estoque: %d\n", produto[i].stock);


            printf("\n");
        }


        return 0;
}
