#include <stdio.h>

int main(){
int matriz[3][3];
int soma;

printf("Escreva numeros interios: \n");
for(int i = 0; i < 3; i++){
    for(int j = 0 ; j < 3; j++){
        scanf("%d",&matriz[i][j]);
    }
    printf("\n");
}
for(int i = 0; i < 3; i++){
    for(int j = 0 ; j < 3; j++){
    soma += matriz[i][j];
    }
    printf("\n");
}
 printf("%d ",soma);
return 0 ;
}
