#include<stdio.h>

int main(){
    int numeros[10];
    int menor, maior;

    printf("Escreva 10 numeros : \n");
    for(int i = 0 ;  i < 10; i++)
    {
        scanf("%d",&numeros[i]);
    }
    maior = numeros[0];
    menor = numeros[0];
    for(int i = 0 ; i < 10 ; i++)
    {
        if(numeros[i] > maior)
        {
            maior = numeros[i];
        }
        else if(numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

printf("A maior nota e: %d\n", maior);
printf("A menor nota e: %d\n", menor);

}


