162)
#include <stdio.h>

int main() {
  int numeros[5], i;
  int *ptr;

  // Lê os números do usuário
  ptr = numeros;
  for (i = 0; i < 5; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", ptr);
    ptr++;
  }

  // Imprime o dobro de cada valor lido
  ptr = numeros;
  for (i = 0; i < 5; i++) {
    printf("Dobro do %dº número: %d\n", i + 1, *ptr * 2);
    ptr++;
  }

  return 0;
}