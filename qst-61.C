#include <stdio.h>


unsigned int status = 0;


unsigned int exp_recursive(unsigned int base, unsigned int expo) {
    if (expo == 0) {
        return 1;
    } else if (expo % 2 == 0) {
        unsigned int temp = exp_recursive(base, expo / 2);
        return temp * temp;
    } else {
        unsigned int temp = exp_recursive(base, (expo - 1) / 2);
        return base * temp * temp;
    }
}

// Função EXP que chama a função recursiva e atualiza o status
unsigned int EXP(unsigned int base, unsigned int expo) {
    unsigned int result = exp_recursive(base, expo);
    if (result == 0) {
        status = 0; 
    } else {
        status = 1; 
    }
    return result;
}

int main() {
    unsigned int base = 2;
    unsigned int expo = 10;
    unsigned int result = EXP(base, expo);

    if (status == 1) {
        printf("%u^%u = %u\n", base, expo, result);
    } else {
        printf("Erro: Exponenciação não pôde ser calculada devido a estouro.\n");
    }

    return 0;
}
