/*Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente esses valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao final na tela os valores em ordem.*/

#include <stdio.h>

int main(){
    int numOrdemCres[10], numReserva;


    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero: ", 1 + i);
        scanf("%d", &numReserva);

        int j = i;
        while (j > 0 && numReserva < numOrdemCres[j - 1])
        {
            numOrdemCres[j] = numOrdemCres[j - 1];
            j--;
        }
        numOrdemCres[j] = numReserva;
    }

    printf("Numeros em ordem Crescente:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numOrdemCres[i]);
    }
    
    return 0;   

}