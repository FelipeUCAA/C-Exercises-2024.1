#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite três números não inteiros:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

  
    float maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

   
    float menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    float intermediario = num1 + num2 + num3 - maior - menor;

    printf("Maior número: %.2f\n", maior);
    printf("Menor número: %.2f\n", menor);
    printf("Valor intermediário: %.2f\n", intermediario);

    return 0;
}
