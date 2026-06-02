#include <stdio.h>


int main(){

int matriz[4][4];
int numeroBusca;
int count = 0;


for(int i = 0 ; i < 4; i++){
    for(int j = 0; j < 4 ; j++){
        scanf("%d",&matriz[i][j]);
    }
    printf("\n");
}
printf("Escreva o numero que deseja buscar: \n");
  scanf("%d",&numeroBusca);

 for(int i= 0 ; i < 4 ; i++){
        for(int j = 0; j < 4 ; j++){
        if(matriz[i][j] == numeroBusca ){
        count = count + 1 ;

         }
        }
   printf("O numero: %d  aparece %d vezes  \n A posicao %d ",numeroBusca,count,i);
  }

  return 0;
}




