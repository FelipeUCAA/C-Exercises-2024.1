#include <stdio.h>

int main() {
    int v1[20];
    int v2[20];
    char oper[20];
    double result[20];
    int i;

   
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº operando: ", i + 1);
        scanf("%d", &v1[i]);
        printf("Digite o %dº operador (+, -, *, /): ", i + 1);
        scanf(" %c", &oper[i]); 
        printf("Digite o %dº operando: ", i + 1);
        scanf("%d", &v2[i]);
    }

   
    for (i = 0; i < 20; i++) {
        switch (oper[i]) {
            case '+':
                result[i] = v1[i] + v2[i];
                break;
            case '-':
                result[i] = v1[i] - v2[i];
                break;
            case '*':
                result[i] = v1[i] * v2[i];
                break;
            case '/':
               
                if (v2[i] != 0) {
                    result[i] = (double)v1[i] / v2[i];
                } else {
                    printf("Erro: Divisão por zero!\n");
                    result[i] = 0; 
                }
                break;
            default:
                printf("Operador inválido!\n");
                result[i] = 0; 
        }
    }

    
    printf("\nResultados:\n");
    for (i = 0; i < 20; i++) {
        printf("Resultado %d: %.2lf\n", i + 1, result[i]);
    }

    return 0;
}
