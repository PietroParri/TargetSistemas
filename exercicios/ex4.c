//MEU COMPILADOR DE C NÃO ACEITA ACENTUAÇÃO FORA DE COMENTÁRIOS
#include <stdio.h>

void main(){
    float vetor[5]={67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    float somatotal; //soma total do faturamento mensal
    int i;
    for (i=0;i<5;i++){
        somatotal+=vetor[i];
    }
    printf("A soma total do faturamento mensal eh de: %.2f",somatotal);
    printf("\n\nRepresentacao de SP foi de : %.2f%%",vetor[0]/somatotal*100);
    printf("\nRepresentacao de RJ foi de : %.2f%%",vetor[1]/somatotal*100);
    printf("\nRepresentacao de MG foi de : %.2f%%",vetor[2]/somatotal*100);
    printf("\nRepresentacao de ES foi de : %.2f%%",vetor[3]/somatotal*100);
    printf("\nRepresentacao de Outros foi de : %.2f%%\n",vetor[4]/somatotal*100);
}
