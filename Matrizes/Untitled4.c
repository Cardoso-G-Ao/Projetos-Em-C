#include <stdio.h>

int main()
{
    int matriz[2][2];
    int maior ;

    printf("Escreva numeros interios: \n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0 ; j < 4; j++)
        {
            scanf("%d",&matriz[i][j]);

        }
        printf("\n");
    }
    for(int i = 0; i < 4; i++)
    {
        maior = matriz[i][0];
        for(int j = 0 ; j < 4; j++)
        {


            if(matriz[i][j]> maior)
            {
                maior = matriz[i][j];
            }
        }
        printf("Linha %d: maior valor = %d\n",i,maior);
    }

    return 0 ;
}
