#include <stdio.h>

int main() {
    int notas[15];
    int soma = 0;
    float media;
    
    printf("Digite as notas dos 15 alunos:\n");

    for (int i = 0; i < 15; i++) {
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

 
    media = (float)soma / 15;

   
    printf("A media geral das notas e: %.2f\n", media);

    return 0;
}
