//MEU COMPILADOR DE C NÃO ACEITA ACENTUAÇÃO FORA DE COMENTÁRIOS
#include <stdio.h>
//Médias não estão exatas por razões de arredondamento do número float

void main(){
    float vetor[30]={22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258,
     46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614,
      0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318,
       1718.1221, 13220.495, 8414.61};
    float media;
    int i,dias=0; //quantidade de dias do mês que o faturamento diário foi superior à media mensal
    //21 dias desconsiderando fim de semana e feriado

    for (i=0;i<30;i++){
        media+=vetor[i];
    }

    media=media/21;
    printf("Media do mes: %.4f",media);

    for (i=0;i<30;i++){
        if(vetor[i]>media){
            dias++;
        }
    }
    printf("\nMenor valor de faturamento ocorrido em um dia do mes: %.4f",vetor[13]);
    printf("\nMaior valor de faturamento ocorrido em um dia do mes: %.4f",vetor[15]);
    printf("\n\nA quantidade de dias que o faturamento diario foi superior a media mensal eh: %d\n",dias);
}
