//A prefeitura de Fortaleza fez uma pesquisa entre seus habitantes, coletando dados sobre salário, idade, sexo e número de filhos. Faça um programa que leia esses dados de 20 pessoas e mostre: a) A média de salário da população; b) A média do número de filhos; c) O maior salário; d) O percentual de mulheres com salário superior a R$ 10.000,00; 
#include <stdio.h>
#include <string.h>
#include <ctype.h>


char str2[] = "H";
char str1[] = "M";


struct pessoa{
    float salario;
    int idade;
    char sexo;
    int filhos;
};


int main(){
    printf("Digite  seus dados para uma pesquisa da prefeitura\n");
    struct pessoa p[5];
   
    for(int  i = 0;i < 5;i++){
        printf("Pessoa [%d/5]\n",i + 1);


        printf("Salario:\n");
        scanf("%f",&p[i].salario);


        printf("Idade: \n");
        scanf("%d",&p[i].idade);


        printf("Seu sexo H ou F\n");
        scanf("%s",&p[i].sexo);


        printf("Digite quantos filhos voce tem:\n");
        scanf("%d",&p[i].filhos);
    }


    float mediasal = 0.0;
    for(int i = 0;i < 5;i++){
        mediasal = mediasal + p[i].salario;
    }
    mediasal = mediasal / 5;


    int mediafilhos = 0;
    for(int i = 0;i < 5;i++){
        mediafilhos = mediafilhos + p[i].filhos;
    }
    mediafilhos = mediafilhos / 5;


    int msal = -1000;
    for(int i = 0;i < 5;i++){
        if(p[i].salario > msal){
            msal = p[i].salario;
        }
    }


    int cont1 = 0;
    int cont2 = 0;


    for(int i = 0;i < 5;i++){
        if(toupper(p[i].sexo) == 'F')
        {
            cont1++;
            if(p[i].salario > 10000){
                cont2++;
            }
        }
    }


    float percentual = 0.0;
    if (cont2 > 0) {
        percentual = (float)cont1 / cont2;
    }


    printf("Media salarial geral: [%.2f]\n",mediasal);
    printf("Media de filhos geral: [%d]\n",mediafilhos);
    printf("O maior salario: [%d]\n",msal);
    printf("Percentual de mulheres com salários acima de 10000: [%.1f]\n",percentual);




    return 0;
}
