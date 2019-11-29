#include<stdio.h>
#include<stdlib.h>
#define max 12

int main(void)
{
    int vet_M[max],vet_T[max];
    int maior=0,aux=vet_M[0];
    float media=0,total=0;
    printf("Informe o numero de vistantes: \n");
    for(int i=0;i<max;i++)
    {
        printf("Mes %d:",i);
        scanf("%d",&vet_M[i]);
        if(vet_M[i]>aux)
        {
            aux=vet_M[i];
            maior=i;
        }
        total+=vet_M[i];
    }
    media=total/max;

    printf("\nMes com mais vistantes: %d\n",maior);
    printf("Numero medio de vistitantes: %.2f\n",media);
    printf("meses abaixo da media:\t");
    for(int j=0;j<max;j++)
    {
        if(vet_M[j]<media)printf("%d\t",j);
    }
}
