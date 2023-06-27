#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
  char frase[1000];
  int i;
printf("digite uma frase\n");
fgets(frase, sizeof(frase), stdin);
for(i = 0;i < strlen(frase);i++){
  int aux = frase[i];
  if(aux >=65 && aux <= 90){
    frase[i] = tolower(frase[i]);
  }
  else if(aux >= 97 && aux <= 122){
    frase[i] = toupper(frase[i]);
  }
}
  printf("%s\n",frase);
  return 0;
}