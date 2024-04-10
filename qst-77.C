#include <stdio.h>

int main() {
    int vetor[10];
    int countPares = 0;

    
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }

 
    printf("Quantidade de valores pares: %d\n", countPares);

    return 0;
}
