#include <stdio.h>

int main() {
    
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    
    int *ptr_inteiro = &inteiro;
    float *ptr_real = &real;
    char *ptr_caractere = &caractere;


    printf("Valor do inteiro antes: %d\n", inteiro);
    printf("Valor do real antes: %.2f\n", real);
    printf("Valor do caractere antes: %c\n", caractere);

    
    *ptr_inteiro = 20;
    *ptr_real = 6.28;
    *ptr_caractere = 'B';

    
    printf("Valor do inteiro depois: %d\n", inteiro);
    printf("Valor do real depois: %.2f\n", real);
    printf("Valor do caractere depois: %c\n", caractere);

    return 0;
}
