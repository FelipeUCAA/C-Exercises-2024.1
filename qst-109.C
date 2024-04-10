#include <stdio.h>


void bubbleSort(float vetor[], int tamanho) {
    int i, j;
    float temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    float vetor[10]; 
    int i;

   
    printf("Digite 10 números reais:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    
    bubbleSort(vetor, 10);

    
    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
