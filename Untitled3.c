#include <stdio.h>

int main(){
   int numeros[8];
   int soma ;


    printf("Escreva 8 numeros: \n");
    for(int i = 0 ;  i < 8; i++)
    {
        scanf("%d",&numeros[i]);
        soma = soma + numeros[i];
    }
    printf("Resultado da soma : %d  \n",soma);
}
