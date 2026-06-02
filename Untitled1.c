#include <stdio.h>

int main()
{
    int numeros[5];
     printf("Escreva um numero inteiro : \n");
    for(int i = 0 ; i < 5; i++)
    {
        scanf("%d",&numeros[i]);
    }
    printf("Valores digitados : \n");
    for(int i = 0 ; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }


    }



