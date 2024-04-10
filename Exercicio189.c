#include <stdio.h>

void minMaxMedio(int *vetor, int tam, int *min, int *max, double *medio) {
    if (tam <= 0) {
        printf("Vetor vazio!\n");
        return;
    }


    *min = *max = vetor[0];
    *medio = 0.0;
    
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        if (vetor[i] < *min)
            *min = vetor[i];
        if (vetor[i] > *max)
            *max = vetor[i];
        soma += vetor[i];
    }

    *medio = (double)soma / tam;
}

int main() {
    int vetor[] = {5, 10, 2, 8, 15};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    int min, max;
    double medio;

    minMaxMedio(vetor, tam, &min, &max, &medio);

    printf("Mínimo: %d\n", min);
    printf("Máximo: %d\n", max);
    printf("Médio: %.2f\n", medio);

    return 0;
}
