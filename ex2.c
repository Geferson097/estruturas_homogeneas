#include<stdio.h>
#include<stdlib.h>
#define max 10

int main(void)
{
    int vet[max],aux;
    printf("Informe os valores: \n");
    for(int i=0;i<max;i++)
    {
        printf("%d: ",i);
        scanf("%d",&vet[i]);
    }
    for(int i=0;i<max/2;i++)
    {
        aux=vet[i];
        vet[i]=vet[(max-i)-1];
        vet[(max-i)-1]=aux;
    }
    for(int i=0;i<max;i++)
    {
        printf("%d  ",vet[i]);
    }
}
