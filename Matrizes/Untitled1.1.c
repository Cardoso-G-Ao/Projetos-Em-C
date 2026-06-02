#include <stdio.h>

int main(){
int matriz[2][3];

printf("Escreva numeros interios: \n");
for(int i = 0; i < 2; i++){
    for(int j = 0 ; j < 3; j++){
        scanf("%d",&matriz[i][j]);
    }
    printf("\n");
}
for(int i = 0; i < 2; i++){
    for(int j = 0 ; j < 3; j++){
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
}
return 0 ;
}
