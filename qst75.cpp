/*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor.  Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>

int main(){
    float vetor1[10];
    float vetor2[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero real:\n", i + 1);
        scanf("%f", &vetor1[i]);
        vetor2[i] = vetor1[i] * vetor1[i];
    }

    for(int i = 0; i < 10; i++){
        printf("\n%2.f elevado ao quadrado = %2.f\n", vetor1[i], vetor2[i]);
    }
}