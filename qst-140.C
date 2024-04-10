#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num = 0;
    int i, j, matriz[5][5];

    printf("Informe os elementos da matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Posição = Linha: %d Coluna: %d -> ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o número a ser pesquisado:\n");
    scanf("%d", &num);

    int encontrado = 0; 

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == num) {
                printf("Número encontrado na linha: %d e Coluna: %d\n", i + 1, j + 1);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("Número não encontrado na matriz.\n");
    }

    return 0;
}
