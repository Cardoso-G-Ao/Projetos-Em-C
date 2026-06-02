#include <stdio.h>

int main(){
int matriz[4][4];
int soma;

printf("Escreva numeros interios: \n");
for(int i = 0; i < 4; i++){
    for(int j = 0 ; j < 4; j++){
        scanf("%d",&matriz[i][j]);
    }
    printf("\n");
}
for(int i = 0; i < 4; i++){
    for(int j = 0 ; j < 4; j++){
    soma = matriz[3][0] + matriz[2][1] + matriz[1][2] + matriz[0][3] ;
    printf("%d ",matriz[i][j]);
    }
    printf("\n");
}

 printf("%d ",soma);

return 0 ;
}
