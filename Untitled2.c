#include<stdio.h>

int main()
{
    int numeros[6];

    printf("Escreva 6 numeros: \n");
    for(int i = 0 ;  i < 6; i++)
    {
        scanf("%d",&numeros[i]);
    }
    printf("valors dos  6 numeros: \n");
    for(int i = 5 ;  i >= 0; i--)
    {
        printf("%d ", numeros[i]);
    }
}



