#include <stdio.h>

int main(){
    int vetor1[5];
    int vetor2[5];
    int vetorResultado[5];


    printf("Escreva 5 numeros : \n");
  for(int i= 0 ; i < 5 ; i++){
    scanf("%d",&vetor1[i]);
  }

  printf("Escreva 5 numeros : \n");
  for(int i= 0 ; i < 5; i++){
    scanf("%d",&vetor2[i]);
  }
  for(int i= 0 ; i < 5; i++){
    vetorResultado[i] = vetor1[i] + vetor2[i];
  printf("%d ",vetorResultado[i]);
  }


}
