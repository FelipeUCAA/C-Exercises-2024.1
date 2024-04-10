#include <stdio.h>
#include <ctype.h> 

int contarEspacos(char frase[]) {
    int espacos = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (isspace(frase[i])) {
            espacos++;
        }
    }
    return espacos;
}

int contarVogais(char frase[]) {
    int vogais = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (tolower(frase[i]) == 'a' || tolower(frase[i]) == 'e' || tolower(frase[i]) == 'i' ||
            tolower(frase[i]) == 'o' || tolower(frase[i]) == 'u') {
            vogais++;
        }
    }
    return vogais;
}


int contarConsoantes(char frase[]) {
    int consoantes = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i]) && !contarVogais(&frase[i])) {
            consoantes++;
        }
    }
    return consoantes;
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); 

    int espacos = contarEspacos(frase);
    int vogais = contarVogais(frase);
    int consoantes = contarConsoantes(frase);

    printf("Número de espaços em branco na frase: %d\n", espacos);
    printf("Número de vogais na frase: %d\n", vogais);
    printf("Número de consoantes na frase: %d\n", consoantes);

    return 0;
}
