#include <stdio.h>

int main(){
int matriz[2][3];
int transposta[3][2];

printf("Escreva numeros interios: \n");
for(int i = 0; i < 2; i++){
    for(int j = 0 ; j < 3; j++){
        scanf("%d",&matriz[i][j]);
    }
    printf("\n");
}
for(int i = 0; i < 3; i++){
    for(int j = 0 ; j < 2; j++){
      transposta[i][j] = matriz[j][i];
}
  printf("\n");

}
for(int i = 0; i < 3; i++){
    for(int j = 0 ; j < 2; j++){
       printf("%d ", transposta[i][j] );
}
  printf("\n");

}
return 0 ;
}
