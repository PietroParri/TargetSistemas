//MEU COMPILADOR DE C NÃO ACEITA ACENTUAÇÃO FORA DE COMENTÁRIOS
#include <stdio.h>

void main(){
int indice=13;
int soma=0;
int k=0;

    while (k<indice){
        k++;
        soma+=k;
    }
    printf("Soma: %d",soma);
}
