#include <stdio.h>

int main() {
    int vetor[10]; 
    int maior = 0; 
    int posicaoMaior = -1; 

  
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

   
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }

    
    printf("Vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    printf("Maior elemento: %d\n", maior);
    printf("Posição do maior elemento: %d\n", posicaoMaior);

    return 0;
}
