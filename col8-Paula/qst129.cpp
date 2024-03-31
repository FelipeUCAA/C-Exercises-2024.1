/*Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.*/

#include <stdio.h>

int main(){
    int linha = 5, coluna = 5; 
    
    printf("-- M A T R I Z  4x4 --\n\n");
    for (int i = 1; i < linha; i++ ){
        for(int c = 1; c < coluna; c++){
            printf("\t%d ", i * c);
        }
        printf("\n");
    }
    
    printf("\n-----------------------");
}