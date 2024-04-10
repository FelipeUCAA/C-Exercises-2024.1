#include <stdio.h>

int main() {
    int A[10], B[10], C[10];
    int i;

    
    printf("Digite os 10 números do vetor A:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite os 10 números do vetor B:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &B[i]);
    }

    
    printf("\nO vetor C é:\n");
    for (i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
