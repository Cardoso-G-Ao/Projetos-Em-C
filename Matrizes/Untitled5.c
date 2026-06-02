
#include <stdio.h>

int main(){
    int matrizA[2][3];
    int matrizB[2][3];
    int matrizC[2][3];
    int maior ;

    printf("Escreva numeros interios: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0 ; j < 3; j++){
            scanf("%d",&matrizA[i][j]);
        }
        printf("\n");
    }
    printf("Escreva numeros interios: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0 ; j < 3; j++){
            scanf("%d",&matrizB[i][j]);
        }
        printf("\n");
    }
      for(int i = 0; i < 2; i++){
        for(int j = 0 ; j < 3; j++){
         matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
          printf("%d ",matrizC[i][j]);
        }
        printf("\n");
      }

    return 0 ;

}
