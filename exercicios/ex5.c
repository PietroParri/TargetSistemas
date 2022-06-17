//MEU COMPILADOR DE C NÃO ACEITA ACENTUAÇÃO FORA DE COMENTÁRIOS
#include <stdio.h>
#include <string.h>

void main(){
    char string[20] = "Target";
    char stringInvertida[20];
    int i,j=0;
    int tam = strlen(string); //otimização

    //Inverte apenas visualmente, a string em si continua a mesma
    for (i=tam-1;i>=0;i--){
        printf("%c",string[i]);
    }

    for(i=tam-1;i>=0;i--){
        stringInvertida[j] = string[i];
        j++;
    }
    stringInvertida[j] = '\0';
    printf("\n\n%s\n",stringInvertida);

}
