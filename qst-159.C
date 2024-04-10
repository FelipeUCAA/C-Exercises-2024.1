#include <stdio.h>


void calcularSoma(int *a, int b) {
    *a = *a + b;
}

int main() {
    int n1, n2;

    printf("Informe N1 e N2:\n");
    scanf("%i %i", &n1, &n2);

    
    calcularSoma(&n1, n2);

    printf("N1 = %i, N2 = %i\n", n1, n2);

    return 0;
}
