/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço. */

#include <stdio.h>

int main(){

    int numA, numB;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numA);
    printf("Digite o segundo numero: ");
    scanf("%d", &numB);
    
if (&numA > &numB) {
        printf("\n\nEndereco A = %p é maior do que endereco B = %p\n", (void*)&numA, (void*)&numB);
        printf("Conteudo do maior endereco = %d\n", numA);
    } else {
        printf("Endereco A = %p é menor do que endereco B = %p\n", (void*)&numA, (void*)&numB);
        printf("Conteudo do maior endereco = %d\n", numB);
    }
    
}