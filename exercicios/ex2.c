//MEU COMPILADOR DE C N�O ACEITA ACENTUA��O FORA DE COMENT�RIOS
#include <stdio.h>
/*Como voc�s n�o especificaram o tamanho da sequ�ncia de Fibonacci, resolvi criar uma
vari�vel para o usu�rio decidir o tamanho da sequ�ncia (j� que ela teoricamente � infinita)*/


void main(){
    int n,n2,auxiliar,a,b;
    a=0;
    b=1;
    int boolean=0;//false

    printf("Digite um numero que define o tamanho da sequencia: ");
    scanf("%d",&n);
    printf("Digite um numero que voce ache estar na sequencia: ");
    scanf("%d",&n2);
    printf("\nSequencia: \n\n");
    printf("0\n");
    printf("%d\n",b);

    for (int i=0;i<n;i++){
        auxiliar = a+b;
        a = b;
        b = auxiliar;

        printf("%d\n",auxiliar);
            if((n2==auxiliar) || (n2==0)){
                boolean++;
            }
        }
    if(boolean!=0){
        printf("\nO numero que voce digitou pertence a sequencia de Fibonacci!");
    }
    else{
        printf("\nO numero que voce digitou NAO pertence a sequencia de Fibonacci");
    }
}
