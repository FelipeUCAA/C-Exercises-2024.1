163)
#include <stdio.h>

int main() {
  int numeros[5], i;

  // Lê os números do usuário
  for (i = 0; i < 5; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  // Imprime o endereço das posições contendo valores pares
  for (i = 0; i < 5; i++) {
    if (numeros[i] % 2 == 0) {
      printf("Endereço da posição %d: %p\n", i, &numeros[i]);
    }
  }

  return 0;
}
