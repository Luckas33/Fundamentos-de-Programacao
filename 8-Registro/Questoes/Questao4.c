//Uma empresa armazena informações sobre as contas a receber de seus clientes. Cada uma dessas contas possui as seguintes informações: número do documento, código do cliente, data de vencimento, data de pagamento, valor da conta e valor de juros. Faça um programa para ler as informações sobre 15 documentos (contas a receber) e exibir o total geral arrecadado com juros. Se a data de pagamento for maior que a data de vencimento, em um determinado documento, o programa deverá calcular o valor do campo “juros”, o qual corresponde a 0,02% do valor do documento para cada dia em atraso.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


struct dados{
    int doc;
    int cod;
    int data_vencimento[2];
    int data_pagamento[2];
    int value_account;
};




int main(){
    int n,k = 0;
    printf("Digite quantos clientes voce deseja inserir dados\n");
    scanf("%d",&n);


    struct dados clientes[n];


    for(int i = 0;i < n;i++){
        printf("Cliente [%d/%d]\n",i + 1,n);


        printf("Digite o numero do documento do cliente:\n");
        scanf("%d",&clientes[i].doc);


        printf("Digite o codigo do cliente:\n");
        scanf("%d",&clientes[i].cod);


       


        while(k < 1){
            for(int j = 0;j < 3;j++){
            printf("Digite a data de vencimento da fatura dia/mes/ano\n");
            scanf("%d",&clientes[i].data_vencimento[j]);
            }
             for(int j = 0;j < 3;j++){
            printf("Digite a data do pagemento da fatura dia/mes/ano\n");
            scanf("%d",&clientes[i].data_pagamento[j]);
             }
             k++;
        }
        printf("Digite o valor da conta\n");
        scanf("%d",&clientes[i].value_account);  
    }
   
    int arrecadacao = 0;


    for(int i = 0;i < n;i++){
        arrecadacao += clientes[i].value_account;
    }


     int juros = 0;
    for (int i = 0; i < n; i++) {
        int dia_vencimento = clientes[i].data_vencimento[0];
        int mes_vencimento = clientes[i].data_vencimento[1];
        int ano_vencimento = clientes[i].data_vencimento[2];


        int dia_pagamento = clientes[i].data_pagamento[0];
        int mes_pagamento = clientes[i].data_pagamento[1];
        int ano_pagamento = clientes[i].data_pagamento[2];


        if (ano_pagamento > ano_vencimento || (ano_pagamento == ano_vencimento && mes_pagamento > mes_vencimento) || (ano_pagamento == ano_vencimento && mes_pagamento == mes_vencimento && dia_pagamento > dia_vencimento)) {
            int dias_atraso = ((ano_pagamento - ano_vencimento) * 365) + ((mes_pagamento - mes_vencimento) * 30) + (dia_pagamento - dia_vencimento);
            int juros_documento = clientes[i].value_account * dias_atraso * 0.0002;
            juros += juros_documento;
        }
    }


    printf("Arrecadacao noraml: %d \n",arrecadacao);
    printf("Total arrecadado com juros: %d\n",juros);
   
    return 0;
}
