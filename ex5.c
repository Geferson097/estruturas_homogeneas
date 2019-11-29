#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
int main(void)
{
    char str[max],str2[max],str3[]={"@utfpr.edu.br"};
    scanf("%s[^\n]", str);
    int i=0,j=0,k=0;
    int flag1,flag2,cont;
    char aux[max];
    while(str[i]!='@')
    {
        str2[i]=str[i];
        str2[i+1]='\0';
        cont=i+1;
    i++;
    }
    for(i;str[i]!='\0';i++)
    {
        aux[k]=str[i];
        aux[k+1]='\0';
        k++;
    }
    while(str2[j]!='\0')
    {
        if(str2[j]!='-' || str2[j]!='_' || str2[i]!='46')flag1=0;
        if(str2[j]<'48' && str2[j]>'57' || str2[j]<'65' && str[j]>'90' || str2[j]<'97' && str[j]>'122') flag1=0;
        else
        {
            flag1=1;
        }
    j++;
    }
    if(strcmp(aux,str3)==0)
    {
        flag2=1;
    }
    if(flag1 && flag2==1)printf("valido");
    else printf("invalido");

    printf("\n%s",str2);
    printf("\n%s",aux);

}
