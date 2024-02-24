//Fazer um programa para ler um número do usuário e determinar se este número é par ou não par.

#include <stdio.h>

int main(){
    int num, opc;
    do{printf("Digite um numero: ");
    scanf("%d", &num); 
    if(num % 2 == 0){
        printf("O numero %d é par", num);
    }else{
        printf("O numero %d é impar", num);
    }
    printf("\nDeseja digitar novamente(1-sim/0-nao):");
    scanf("%d", &opc);
    }while(opc != 0);

    return 0;
}