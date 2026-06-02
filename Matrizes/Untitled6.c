#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
             if(i == 0 || i == 4 || j == 0 || j == 4) {
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("%d ",soma);
    return 0;
}
