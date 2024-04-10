#include <stdio.h>

int main() {
    
    int A[6] = {1, 0, 5, -2, -5, 7};

  
    int soma = A[0] + A[1] + A[5];

 
    A[3] = 100;

   
    printf("Soma dos valores em A[0], A[1] e A[5]: %d\n", soma);

   
    printf("Valores do vetor A:\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d\n", A[i]);
    }

    return 0;
}
