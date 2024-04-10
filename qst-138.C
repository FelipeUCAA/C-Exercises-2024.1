#include <stdio.h>

int main() {
    int matriz[3][3];
    int transposta[3][3];
    int i, j;

   
    printf("Digite os elementos da matriz (linha por linha):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    
    printf("\nMatriz transposta:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
