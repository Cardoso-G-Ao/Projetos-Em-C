#include <stdio.h>


int main(){
  int numeros[10];
  int numeroBusca ;
  int count = 0;

  printf("Escreva 10 numeros : \n");
  for(int i= 0 ; i < 10 ; i++){
    scanf("%d",&numeros[i]);
  }
  printf("Escreva o numero que deseja buscar: \n");
  scanf("%d",&numeroBusca);

 for(int i= 0 ; i < 10 ; i++){
    if(numeros[i] == numeroBusca){
        count = count + 1 ;
    }
  }
  printf("O numero: %d  aparece %d vezes ",numeroBusca,count);

}
