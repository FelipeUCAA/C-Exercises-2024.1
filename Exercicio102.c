#include <stdio.h>

int main() {
    int numeros[6];
    int num_pares[6], num_impares[6];
    int soma_pares = 0;
    int qtd_impares = 0;
    int qtd_pares = 0;


    printf("Digite 6 números inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 6; i++) {
        if (numeros[i] % 2 == 0) { 
            num_pares[qtd_pares] = numeros[i];
            soma_pares += numeros[i];
            qtd_pares++;
        } else {  
            num_impares[qtd_impares] = numeros[i];
            qtd_impares++;
        }
    }


    printf("\n(a) Números pares digitados:\n");
    for (int i = 0; i < qtd_pares; i++) {
        printf("%d ", num_pares[i]);
    }
    printf("\n");

   
    printf("\n(b) Soma dos números pares digitados: %d\n", soma_pares);

    printf("\n(c) Números ímpares digitados:\n");
    for (int i = 0; i < qtd_impares; i++) {
        printf("%d ", num_impares[i]);
    }
    printf("\n");

    printf("\n(d) Quantidade de números ímpares digitados: %d\n", qtd_impares);

    return 0;
}
