#include <stdio.h>

int main() {
    int tamanho = 50;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    
    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
