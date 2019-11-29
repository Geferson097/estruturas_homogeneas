#include<stdio.h>
#include<stdlib.h>
#define lin 7
#define col 4

int main(void)
{
    int matrix[lin][col];



    int total=0,maior_Tmp=0,maior_Umi=0,aux=0,dia_Q=0,dia_U=0;
    float media_Tmp=0,media_Umi=0,media_Vel=0;
    for(int i=0;i<lin;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Informe o elemento [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<lin;i++)//temperatura media
    {
        total+=matrix[i][0];
    }
    media_Tmp=total/lin;
    total=0;
    for(int i=0;i<lin;i++)//umidade media
    {
        total+=matrix[i][1];
    }
    media_Umi=total/lin;
    total=0;
    for(int i=0;i<lin;i++)//velocidade media
    {
        total+=matrix[i][3];
    }
    media_Vel=total/lin;

    for(int i=0;i<lin;i++)//maior temperatura
    {
        if(matrix[i][0]>maior_Tmp)
        {
            maior_Tmp=matrix[i][0];
            dia_Q=i;
        }
    }

    for(int i=0;i<lin;i++)//maior umidade
    {
        if(matrix[i][1]>maior_Umi)
        {

            maior_Umi=matrix[i][1];
            dia_U=i;
        }
    }

    for(int i=0;i<lin;i++)//dias de chuva
    {
        if(matrix[i][2]>=80)aux++;
    }

    printf("Temperatura media: %.2f\n",media_Tmp);
    printf("Umidade media: %.2f\n",media_Umi);
    printf("Velocidade media: %.2f\n",media_Vel);
    printf("Dia mais quente: %d\n",maior_Tmp);
    printf("Dia mais umido: %d\n",maior_Umi);
    printf("Dias de chuva %d\n",aux);
    printf("Dias de sol %d\n",lin-aux);
}
