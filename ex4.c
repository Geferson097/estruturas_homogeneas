#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
int main(void)
{
    char str1[max],str2[max],str3[max];
    scanf("%s[^\n]", str1);
    scanf("%s[^\n]", str2);
    int tam1=strlen(str1);
    int tam2=strlen(str2);
    int i=0,k=0,j=1;
    //encontrar caracteres repetidos
    for(int i=0;i<tam1;i++)
    {
        for(int j=0;j<tam2;j++)
        {
            if(str1[i]==str2[j])
            {
                str3[k]=str2[j];
                str3[k+1]='\0';
                k++;
            }
        }

    }
    //remover caracteres repetidos
    int tam=strlen(str3);
    char str4[tam];
    strcpy(str4,str3);
    while(i<tam)
    {
        if(str3[i]==str4[j])
        {
            str3[i]=str4[j];
        }
        else
        {
            str3[i+1]=str4[j];
            i++;
        }
        j++;
    }
    printf("%s\n",str3);
}
