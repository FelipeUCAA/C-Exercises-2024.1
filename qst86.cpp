/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero:", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nValores iguais:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (numeros[i] == numeros[j])
            {
                printf("%d\n", numeros[i]);
            }
            
        }
        
    }
    
    return 0;
}
