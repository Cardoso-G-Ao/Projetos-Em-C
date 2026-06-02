#include <stdio.h>

int main(){
int matriz[4][4];


printf("Escreva numeros interios: \n");
for(int i = 0; i < 4; i++){
    for(int j = 0 ; j < 4; j++){
        scanf("%d",&matriz[i][j]);
    }
    printf("\n");
}
for(int i = 0; i < 4; i++){
    printf("%d ",matriz[i][3 - i]);
}


return 0 ;
}
