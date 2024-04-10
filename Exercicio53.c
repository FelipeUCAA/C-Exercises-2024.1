#include <stdio.h>

unsigned int inverte(unsigned int num) {
    unsigned int invertido = 0;
    
    while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }

    return invertido;
}

int main() {
    unsigned int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%u", &num);

    unsigned int resultado = inverte(num);

    printf("O número invertido é: %u\n", resultado);

    return 0;
}
