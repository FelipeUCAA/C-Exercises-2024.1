#include <stdio.h>

const int tamanhoMatriz = 3;

void gerarMatriz(int matriz[][tamanhoMatriz]) {
    for(int i = 0; i < tamanhoMatriz; i++) {
        for(int j = 0; j < tamanhoMatriz; j++) {
            printf("Digite um numero:");
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[][tamanhoMatriz]) {
    for(int i = 0; i < tamanhoMatriz; i++) {
        for(int j = 0; j < tamanhoMatriz; j++) {
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");
    }
}
void multiplicarMatrizes(int matrizX[][tamanhoMatriz], int matrizY[][tamanhoMatriz]) {
    for(int i = 0; i < tamanhoMatriz; i++) {
        for(int j = 0; j < tamanhoMatriz; j++) {
            printf("%d  ", matrizX[i][j] * matrizY[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[tamanhoMatriz][tamanhoMatriz], matrizB[tamanhoMatriz][tamanhoMatriz];
    printf("Digite os números da primera matriz:\n");
    gerarMatriz(matrizA);
    printf("Digite os números da segunda matriz:\n");
    gerarMatriz(matrizB);
    printf("\n\n-- MATRIZ A --\n");
    exibirMatriz(matrizA);
    printf("\n\n-- MATRIZ A --\n");
    exibirMatriz(matrizB);
    printf("\n\n-- MATRIZ AxB --\n");
    multiplicarMatrizes(matrizA, matrizB);

    return 0;
}
