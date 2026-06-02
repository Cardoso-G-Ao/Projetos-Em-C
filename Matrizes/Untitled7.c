#include <stdio.h>

int main(){
int matriz[4][4];
int somaS = 0;
int somaP = 0;
int soma = 0;

printf("Escreva numeros interios: \n");
for(int i = 0; i < 4; i++){
    for(int j = 0 ; j < 4; j++){
        scanf("%d",&
              matriz[i][j]);
    }
    printf("\n");
}

for(int i = 0; i < 4; i++){
    for(int j = 0 ; j < 4; j++){
    somaS = matriz[3][0] + matriz[2][1] + matriz[1][2] + matriz[0][3] ;
    }
    printf("\n");
}

for(int i = 0; i < 4; i++){
    for(int j = 0 ; j < 4; j++){
    if(i == j){
        somaP = somaP + matriz[i][j];
    }
   }
    printf("\n");
}

soma = somaP + somaS;
printf("Soma das diagonais : %d",soma);

return 0 ;
}
