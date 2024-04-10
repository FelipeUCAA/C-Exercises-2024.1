#include <stdio.h>


int contarDigitos(unsigned int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}


int saoPermutacoes(unsigned int num1, unsigned int num2) {
    if (contarDigitos(num1) != contarDigitos(num2)) {
        return 0; // Números têm diferentes quantidades de dígitos
    }

   
    int digitCount[10] = {0}; // Inicializa com zeros
    while (num1 > 0) {
        digitCount[num1 % 10]++;
        digitCount[num2 % 10]--;
        num1 /= 10;
        num2 /= 10;
    }

    
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] != 0) {
            return 0;
        }
    }

    return 1; 
}

int main() {
    unsigned int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%u", &num1);
    printf("Digite o segundo número: ");
    scanf("%u", &num2);

    if (saoPermutacoes(num1, num2)) {
        printf("%u é permutação de %u.\n", num1, num2);
    } else {
        printf("%u não é permutação de %u.\n", num1, num2);
    }

    return 0;
}
