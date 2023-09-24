#include <stdio.h>
#include <string.h>
#include <ctype.h>


void inverte(char frase[],char frasenova[]){
    
    strcpy(frasenova,frase);

    for(int i = 0;i <= strlen(frase);i++)
     if(islower(frase[i]) ){
      frasenova[i] = toupper(frase[i]);
     }
     else if(isupper(frase[i])){
       frasenova[i] = tolower(frase[i]);
     }

}


int main(){
    char frase[100];
    char *frasenova[100];
    printf("Digite uma frase:\n");
    fgets(frase,sizeof(frase),stdin);

    inverte(frase,frasenova);
    printf("%s\n",frasenova);

    return 0;
}