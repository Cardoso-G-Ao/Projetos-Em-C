#include <stdio.h>
int main()
{
    int notas[10];
    int soma ;
    float media ;
    int count = 0;

    printf("Escreva 10 notas : \n");
    for(int i = 0 ;  i < 10; i++)
    {
        scanf("%d",&notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 10;

    for(int i = 0 ; i < 10 ; i++)
    {

        if(notas[i] > media)
        {
            count = count + 1;
        }
    }

    printf("Resultado da soma : %d  \n",soma);
    printf("Resultado da media : %.2f  \n",media);
    printf("Resultado da quantidade de notas acima da media : %d  \n",count);
}
