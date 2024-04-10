#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para usar a função tolower


int ehPalindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        
        while (!isalpha(str[inicio])) {
            inicio++;
        }
        while (!isalpha(str[fim])) {
            fim--;
        }

       
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0; 
        }

        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char entrada[100];
    printf("Digite uma string: ");
    scanf("%99[^\n]", entrada);

    if (ehPalindromo(entrada)) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}
