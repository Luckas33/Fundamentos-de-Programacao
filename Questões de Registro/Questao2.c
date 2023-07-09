//Faça um programa contendo os serviços que uma oficina mecânica realiza. Uma ordem de serviço é composta pelas seguintes informações: número da OS, data, valor, descrição do serviço realizado e nome do cliente. Leia as informações sobre várias ordens de serviço e determine, ao final: a) a média dos valores dos serviços realizados e b) o nome do cliente que realizou o serviço mais caro, juntamente com a descrição desse serviço e a data de sua realização. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>


struct service{
    int numservice;
    char date[13];
    float price;
    char description[2000];
    char nameclient[100];
};




int main(){
    printf("Digite as ordens de serviço de 4 clientes da oficina\n");
    struct service client[4];


    for(int i = 0;i < 4;i++){
        printf("Cliente [%d/4]\n",i + 1);


        printf("Nome do cliente: \n");
        fgets(client[i].nameclient,sizeof(client[i].nameclient),stdin);


        printf("Numero de OS:\n");
        scanf("%d", &client[i].numservice);
        getchar();


        printf("Data:\n");
        fgets(client[i].date,sizeof(client[i].date),stdin);


        printf("Preco pago: \n");
        scanf("%f", &client[i].price);
        getchar();


        printf("A descricao do servico: \n");
        fgets(client[i].description,sizeof(client[i].description),stdin);


    }


    float mediavalor = 0.0;
    for(int i = 0;i < 4;i++){
        mediavalor += client[i].price;
    }
    mediavalor = mediavalor / 4;


    int contador = 0;


    float mvalor = -1000;


    for(int i = 0;i < 4;i++){
        if(client[i].price > mvalor){
            mvalor = client[i].price;
            contador = i;
        }
    }


    printf("\nA media dos valores pagos: [%.2f]",mediavalor);
    printf("\nPessoa que pagou mais caro,com valor,descricao e data do servico\n");
    printf("Nome: [%s]",client[contador].nameclient);
    printf("\n");
    printf("Valor pago: [%.2f]",mvalor);
    printf("\n");
    printf("Descricao: [%s]",client[contador].description);
    printf("\n");
    printf("Data: %s",client[contador].date);

    return 0;
}
