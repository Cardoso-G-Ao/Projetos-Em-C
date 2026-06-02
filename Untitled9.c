#include <stdio.h>

int main()
{
    int numeros[10];

    printf("Escreva 10 numeros : \n");
    for(int i= 0 ; i < 10 ; i++)
    {
        scanf("%d",&numeros[i]);

        if(numeros[i] < 0)
        {
            numeros[i] =0 ;
        }
    }
    for(int i= 0 ; i < 10 ; i++)
    {
        printf("%d ", numeros[i]);
    }

}

