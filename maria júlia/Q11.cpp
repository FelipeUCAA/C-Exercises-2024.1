/*Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses números. Encerre a execução quando um número negativo for digitado.
*/
#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

   

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Numero negativo ");
            break;
        }

        soma += numero;
    }

    printf("A soma dos numeros é: %d", soma);

    return 0;
}
