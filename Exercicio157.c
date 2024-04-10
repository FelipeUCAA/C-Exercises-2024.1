#include <stdio.h>

void encontrar_maior_menor(int a, int b, int *maior, int *menor) {
    if (a > b) {
        *maior = a;
        *menor = b;
    } else {
        *maior = b;
        *menor = a;
    }
}

int main() {
    int num1, num2, maior, menor;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);

   
    encontrar_maior_menor(num1, num2, &maior, &menor);


    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
