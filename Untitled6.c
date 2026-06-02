#include<stdio.h>

int main(){
    int numeros[10];
    int  maior;
    int posicaoM = 0 ;

    printf("Escreva 10 numeros : \n");
    for(int i = 0 ;  i < 10; i++)
    {
        scanf("%d",&numeros[i]);
    }
    maior = numeros[0];
    for(int i = 0 ; i < 10 ; i++)
    {
        if(numeros[i] > maior)
        {
            maior = numeros[i];
            posicaoM = i;
        }
    }
printf("A maior nota e: %d , e sua posição e : %d\n", maior ,posicaoM);
}
