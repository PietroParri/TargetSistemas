//MEU COMPILADOR DE C NÃO ACEITA ACENTUAÇÃO FORA DE COMENTÁRIOS
#include <stdio.h>
/*Como vocês não especificaram o tamanho da sequência de Fibonacci, resolvi criar uma
variável para o usuário decidir o tamanho da sequência (já que ela teoricamente é infinita)*/


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
