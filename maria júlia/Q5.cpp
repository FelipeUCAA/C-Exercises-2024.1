/*Leia o nome do usuário e escreva o nome dele na tela 10 vezes. 
Aprimore, pedindo que o usuário digite a quantidade de vezes que o nome será repetido
declarar um cantador
declarar a variavvel

*/
#include<stdio.h>

int main() {
    int contador;
    char nome[100];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite quantas vezes deseja imprimir o nome: ");
    scanf("%d", &contador);

    while (contador > 0) {
        printf("%s\n", nome);
        contador--;
    }

    return 0;
}
