/*Fazer um programa que receba três nomes de no máximo 15 caracteres cada um (nomes com mais de 15 caracteres devem ser rejeitados) e as idades das respectivas pessoas em um vetor de estruturas de dados. Após o recebimento, listar os 3 nomes e idades que nela foram armazenados.
*/
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nome[16];
    int idade;
} tipoPessoa;

tipoPessoa pessoa[3];

int validarNome(const char *nome) {

    size_t tamanho = strlen(nome);

    if (tamanho == 15 ) {
        printf("String aceita! Tem %zu caracteres.\n", tamanho);
        return 1;  
    }
    printf("String muito longa! Deve ter no máximo 15 caracteres.\n",);
    return 0; 
}

void linha(){
    for (int i = 0; i < 50; i++) {
        printf("-");
    }
    printf("\n");
}

void preencherDados(int indice) {

    linha();
    printf("Preencha os dados para a pessoa %d\n", indice + 1);  
    
    do {
        printf("Nome: ");
        fflush(stdin);
        fgets(pessoa[indice].nome, sizeof(pessoa[indice].nome), stdin);
        fflush(stdin);
        if (validarNome(pessoa[indice].nome)) {
            break; 
        } else {
            printf("Por favor, digite o nome novamente.\n");
        }

    } while (1);  

    printf("\nIdade: ");
    scanf("%d", &pessoa[indice].idade);
    linha();

}

void mostrarDados(){

    linha();
    printf("Dados armazenados:\n");

    for (int i = 0; i < 3; i++) {
        linha();
        printf("Pessoa %d\n", i);
        printf("Nome: %s\nIdade: %d", pessoa[i].nome, pessoa[i].idade);
        linha();
    }
}

int main(){

    for (int i = 0; i < 3; i++) {
        preencherDados(i);
    }

    mostrarDados();

    return 0;
}
