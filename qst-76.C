#include <stdio.h>

int main() {
    int vetor[8]; 
    int X, Y; 

  
    printf("Digite os 8 valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    
    printf("Digite os valores de X e Y (posições no vetor): ");
    scanf("%d %d", &X, &Y);

    int soma = vetor[X] + vetor[Y];

    
    printf("A soma dos valores nas posições %d e %d é: %d\n", X, Y, soma);

    return 0;
}
