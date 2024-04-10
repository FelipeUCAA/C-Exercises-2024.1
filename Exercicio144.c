#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_colunas[3] = {0};
    int i, j;


    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma_colunas[j] += matriz[i][j];
        }
    }


    printf("Vetor de soma das colunas:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", soma_colunas[i]);
    }
    printf("\n");

    return 0;
}
