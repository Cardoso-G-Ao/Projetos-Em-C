#include <stdio.h>


int main(){
    int vetor1[5];
    int vetor2[5];
    float calcular;

   printf("Escreva 5 numeros : \n");
  for(int i= 0 ; i < 5 ; i++){
    scanf("%d",&vetor1[i]);
  }

  printf("Escreva 5 numeros : \n");
  for(int i= 0 ; i < 5; i++){
    scanf("%d",&vetor2[i]);
  }
  for(int i= 0 ; i < 5; i++){
    calcular = (vetor1[0]* vetor2[0]) + (vetor1[1]* vetor2[1]) + (vetor1[2]* vetor2[2]) + (vetor1[3]* vetor2[3]) ;
  }
  printf("%.2f",calcular);


}
