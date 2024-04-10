#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    int count[256] = {0}; 

    printf("Digite uma string (máx. 50 caracteres):\n");
    gets(str1); // Lê a string do usuário

   
    for (int i = 0; i < strlen(str1); i++) {
        count[(int)str1[i]]++;
    }

 
    printf("Estatística dos caracteres:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("'%c' = %d\n", (char)i, count[i]);
        }
    }

    return 0;
}
