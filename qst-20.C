#include <stdio.h>

int main() {
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    
    cem = valor / 100;
    valor %= 100;
    cinquenta = valor / 50;
    valor %= 50;
    vinte = valor / 20;
    valor %= 20;
    dez = valor / 10;
    valor %= 10;
    cinco = valor / 5;
    valor %= 5;
    dois = valor / 2;
    um = valor % 2;

    printf("Representação em cédulas:\n");
    printf("%d cédula(s) de 100\n", cem);
    printf("%d cédula(s) de 50\n", cinquenta);
    printf("%d cédula(s) de 20\n", vinte);
    printf("%d cédula(s) de 10\n", dez);
    printf("%d cédula(s) de 5\n", cinco);
    printf("%d cédula(s) de 2\n", dois);
    printf("%d cédula(s) de 1\n", um);

    return 0;
}
