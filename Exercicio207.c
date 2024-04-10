#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int contarPalavras(char linha[]) {
    int palavras = 0;
    int dentroPalavra = 0;

    for (int i = 0; linha[i] != '\0'; i++) {
        if (isalpha(linha[i])) {
            if (!dentroPalavra) {
                palavras++;
                dentroPalavra = 1;
            }
        } else {
            dentroPalavra = 0;
        }
    }

    return palavras;
}

int contarLinhasEmBranco(char linha[]) {
    for (int i = 0; linha[i] != '\0'; i++) {
        if (!isspace(linha[i])) {
            return 0;
        }
    }
    return 1;
}

// Função para contar o número total de linhas
int contarTotalLinhas(FILE *arquivo) {
    int totalLinhas = 0;
    char linha[1000]; // Supomos que uma linha não exceda 1000 caracteres

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        totalLinhas++;
    }

    return totalLinhas;
}

// Função para contar o número total de letras
int contarTotalLetras(FILE *arquivo) {
    int totalLetras = 0;
    char c;

    while ((c = fgetc(arquivo)) != EOF) {
        if (isalpha(c)) {
            totalLetras++;
        }
    }

    return totalLetras;
}

int main() {
    printf("Digite o texto (pressione Ctrl-D ou Ctrl-Z para finalizar):\n");

    int palavras = 0;
    int linhasEmBranco = 0;
    int totalLinhas = 0;
    int totalLetras = 0;
    char linha[1000];

    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        palavras += contarPalavras(linha);
        linhasEmBranco += contarLinhasEmBranco(linha);
        totalLinhas++;
    }

    
    rewind(stdin);

    totalLetras = contarTotalLetras(stdin);

    printf("\nEstatísticas do texto:\n");
    printf("Número de palavras: %d\n", palavras);
    printf("Número de linhas em branco: %d\n", linhasEmBranco);
    printf("Número total de linhas: %d\n", totalLinhas);
    printf("Número total de letras: %d\n", totalLetras);

    return 0;
}
