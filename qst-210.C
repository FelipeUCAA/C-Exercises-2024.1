#include <stdio.h>
#include <ctype.h> 


void criptografarCesar(char mensagem[], int chave) {
    for (int i = 0; mensagem[i] != '\0'; ++i) {
        char caractere = mensagem[i];

        if (isalpha(caractere)) { 
            char base = isupper(caractere) ? 'A' : 'a'; 
            int indice = caractere - base; 
            int novo_indice = (indice + chave) % 26; 
            mensagem[i] = base + novo_indice; 
        }
    }
}

int main() {
    char mensagem[100];
    int chave;

    printf("Digite a mensagem a ser criptografada: ");
    scanf("%99[^\n]", mensagem); 
    printf("Digite o valor da chave (K): ");
    scanf("%d", &chave);

    criptografarCesar(mensagem, chave);

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
