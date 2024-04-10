#include <stdio.h>

int main() {
    int matriz[4][4]; 
    int contador = 0; 

    
    printf("Digite os valores da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

   
    printf("Quantidade de valores maiores que 10 na matriz: %d\n", contador);

    return 0;
}
