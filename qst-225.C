#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Pessoa {
    char nome[100];
    int dia_aniversario;
    int mes_aniversario;
};


int calcularIdade(int dia_nascimento, int mes_nascimento, int dia_atual, int mes_atual) {
    int idade = mes_atual - mes_nascimento;
    if (dia_atual < dia_nascimento) {
        idade--;
    }
    return idade;
}

int main() {
    const int num_pessoas = 40;
    struct Pessoa pessoas[num_pessoas];
    int dia_atual, mes_atual;

    printf("Digite a data de hoje (dia mês): ");
    scanf("%d %d", &dia_atual, &mes_atual);

    for (int i = 0; i < num_pessoas; ++i) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite o dia e mês de aniversário (dia mês) da pessoa %d: ", i + 1);
        scanf("%d %d", &pessoas[i].dia_aniversario, &pessoas[i].mes_aniversario);
    }

    printf("\nAniversariantes:\n");
    for (int mes = 1; mes <= 12; ++mes) {
        printf("Mês %d:\n", mes);
        for (int i = 0; i < num_pessoas; ++i) {
            if (pessoas[i].mes_aniversario == mes) {
                int idade = calcularIdade(pessoas[i].dia_aniversario, pessoas[i].mes_aniversario, dia_atual, mes_atual);
                printf("%s (Idade: %d)\n", pessoas[i].nome, idade);
            }
        }
        printf("\n");
    }

    return 0;
}
