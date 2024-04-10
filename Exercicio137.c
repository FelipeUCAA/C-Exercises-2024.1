#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, soma = 0;

  
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        soma += matriz[i][2 - i];
    }


    printf("A soma dos elementos da diagonal secundária é: %d\n", soma);

    return 0;
}
