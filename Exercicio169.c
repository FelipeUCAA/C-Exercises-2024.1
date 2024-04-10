#include <stdio.h>

void frac(float num, int* inteiro, float* frac) {
    *inteiro = (int)num; 
    *frac = num - *inteiro; 
}

int main() {
    float numero;
    int parte_inteira;
    float parte_fracionaria;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    frac(numero, &parte_inteira, &parte_fracionaria);

    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionária: %.2f\n", parte_fracionaria);

    return 0;
}
