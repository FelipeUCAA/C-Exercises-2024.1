/*Leia a idade de 20 pessoas e exiba:
a soma das idades;
a média das idades;
quantas pessoas são maiores de idade;
quantas pessoas são menores de idade;
qual a idade do mais jovem?
qual a idade do mais velho?
quais são as idades pares?
quais são as idades ímpares?
*/
#include <stdio.h>

int main() {
    int contador = 1;
    int idade, soma = 0;
    int maiores_idade = 0, menores_idade = 0;
    int mais_jovem, mais_velho;
    int pares[20], impares[20];
    int indice_pares = 0, indice_impares = 0;

    while (contador <= 20) {
        printf("Digite a idade da pessoa %d: ", contador);
        scanf("%d", &idade);

        soma += idade; // Soma das idades

        if (contador == 1) {
            mais_jovem = mais_velho = idade;
        } else {
            if (idade < mais_jovem)
                mais_jovem = idade;
            if (idade > mais_velho)
                mais_velho = idade;
        }

        if (idade >= 18)
            maiores_idade++;
        else
            menores_idade++;

        if (idade % 2 == 0)
            pares[indice_pares++] = idade;
        else
            impares[indice_impares++] = idade;

        contador++;
    }

    printf("\nSoma das idades: %d\n", soma);
    printf("Média das idades: %.2f\n", (float)soma / 20);
    printf("Pessoas maiores de idade: %d\n", maiores_idade);
    printf("Pessoas menores de idade: %d\n", menores_idade);
    printf("Idade do mais jovem: %d\n", mais_jovem);
    printf("Idade do mais velho: %d\n", mais_velho);

    printf("Idades pares: ");
    for (int i = 0; i < indice_pares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    printf("Idades ímpares: ");
    for (int i = 0; i < indice_impares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}
