//MEU COMPILADOR DE C N�O ACEITA ACENTUA��O FORA DE COMENT�RIOS
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
