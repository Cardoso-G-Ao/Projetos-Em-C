#include <stdio.h>

int main(){
int matriz[3][3];

printf("Escreva numeros interios: \n");
for(int i = 0; i < 3; i++){
    for(int j = 0 ; j < 3; j++){
        scanf("%d",&matriz[i][j]);
    }
    printf("\n");
}
for(int i = 0; i < 3; i++){
    for(int j = 0 ; j < 3; j++){
      if(i == j  ){
          if(matriz[i][j] == 1 ){
                printf("e identica : %d ",matriz[i][j]);
          }
          if(matriz[i][j] != 1 ){
             printf("N e identica : %d ",matriz[i][j]);
          }
       }
    }
    printf("\n");
}
return 0 ;
}
