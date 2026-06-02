#include<stdio.h>

int main()
{
    int numeros[12];
    int encontrouIgual = 0;

//int posicaoM ;

    printf("Escreva 12 numeros : \n");
    for(int i = 0 ; i < 12; i++)
    {
        scanf("%d",&numeros[i]);
    }
    for(int i = 0 ; i < 12; i++)
    {
        for(int j = i + 1; j < 12; j++)
        {
            if(numeros[i] == numeros[j])
            {
                printf("Tem repetição do numero : %d nas posicoes : %d %d\n", numeros[i], i, j);
                encontrouIgual = 1;
            }
        }
    }
if(!encontrouIgual) {
        printf("São tudo diverentao\n");
    }

}
