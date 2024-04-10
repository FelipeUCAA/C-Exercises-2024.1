#include <stdio.h>

void calcula(int *X, int *Y) {
    *X = *X + *Y; 
    *Y = *X - *Y; 
}

int main() {
    int num1, num2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    calcula(&num1, &num2);

    printf("O valor de X agora é: %d\n", num1);
    printf("O valor de Y agora é: %d\n", num2);

    return 0;
}
