
#include <stdio.h>

int main() {
    int n1, n2, n3;
    float media;

    printf("Digite três valores inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("A média dos valores é: %.2f\n", media);

    return 0;
}
