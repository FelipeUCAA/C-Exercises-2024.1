#include <stdio.h>

int main() {
    double valores[5];
    double maior = 0.0, menor = 0.0, soma = 0.0;

    
    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf", &valores[i]);
        soma += valores[i];

        
        if (i == 0 || valores[i] > maior) {
            maior = valores[i];
        }
        if (i == 0 || valores[i] < menor) {
            menor = valores[i];
        }
    }

    
    double media = soma / 5.0;

    
    printf("Valores lidos:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%.2lf ", valores[i]);
    }
    printf("\n");

    printf("Maior valor: %.2lf\n", maior);
    printf("Menor valor: %.2lf\n", menor);
    printf("Média dos valores: %.2lf\n", media);

    return 0;
}
