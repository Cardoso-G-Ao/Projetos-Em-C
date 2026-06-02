#include <stdio.h>

int main(){
 int matriz[4][5];
 int somaL0 = 0;
 int somaL1 = 0;
 int somaL2 = 0;
 int somaL3 = 0;

 for(int i = 0; i < 4; i++){
   for(int j = 0 ; j < 5; j++){
    scanf("%d",&matriz[i][j]);
   }
   printf("\n");
 }


 for(int i = 0; i < 4; i++){
   for(int j = 0 ; j < 5; j++){
   printf("%d ",matriz[i][j]);
   }
   printf("\n");
 }

  for(int i = 0; i < 4; i++){
   for(int j = 0 ; j < 5; j++){
        if(i == 0){
            somaL0 += matriz[0][j] ;
        }
        if(i == 1){
            somaL1 += matriz[1][j] ;
        }
        if(i == 2){
            somaL2 += matriz[2][j] ;
        }
        if(i == 3){
            somaL3 += matriz[3][j] ;
        }
   }
   printf("\n");
 }
    if(somaL1 >somaL0 && somaL1 > somaL2 && somaL1 > somaL3)
    {

        printf("A maior Linha e a linha 1:  a soma e : %d",somaL1);
    }
    else if(somaL0 >somaL1 && somaL0 >somaL2 && somaL0 > somaL3 )
{

    printf("A maior Linha e a linha 0:  , a soma e : %d",somaL0);
    }

    else if(somaL2 >somaL1 && somaL2 >somaL0 && somaL2 > somaL3)
{

    printf("A maior Linha e a linha 2:  , a soma e : %d",somaL2);

    }
    else if(somaL3 >somaL1 && somaL3 >somaL2 && somaL3 > somaL0)
{
    printf("A maior Linha e a linha 3:   a soma e : %d",somaL3);
    }
    else
    {
        printf("São iguais ");
    }

//printf("%d",somaL0);
return 0;
}
