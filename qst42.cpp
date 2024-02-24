/*Faça um programa que sorteie um número aleatório entre 0 e 500 e pergunte ao usuário qual é o "número mágico". O programa deverá indicar se a tentativa efetuada pelo usuário é maior ou menor que o número mágico e contar o número de tentativas. Quando o usuário conseguir acertar o número o programa deverá classiﬁcar o usuário como:*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int numeroAleatorio, numeroChute, numeroDeTentativas = 0;
    numeroAleatorio = rand() % 501;
  
    

    do
    {
        printf("Qual é o numero magico?\n");
        scanf("%d", &numeroChute);
        if (numeroChute > numeroAleatorio)
        {
            printf("Ops! Chute maior do que o numero magico.\n");
            numeroDeTentativas ++;
        } else if(numeroChute < numeroAleatorio){
            printf("Ops! Chute menor do que o numero magico.\n");
            numeroDeTentativas ++;
        }
        
    } while (numeroChute != numeroAleatorio);
        printf("Parabens, voce acertou!\n");

        if (numeroDeTentativas < 4)
        {
            printf("De 1 a 3 tentativas: muito sortudo\n");
        } else if(numeroDeTentativas > 3 && numeroDeTentativas < 7){
            printf("De 4 a 6 tentativas: sortudo\n");
        } else if (numeroDeTentativas > 6 && numeroDeTentativas < 10)
        {
            printf("De 7 a 10 tentativas: normal\n");

        }else if (numeroDeTentativas > 10)
        {
            printf(">10 tentativas: tente novamente\n");

        }        
    }
    



