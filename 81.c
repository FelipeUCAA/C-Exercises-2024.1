81)
#include <stdio.h>

int main() {
  int numeros[6], i;

  // Lê os números pares do usuário
  for (i = 0; i < 6; i++) {
    printf("Digite o %dº número par: ", i + 1);
    scanf("%d", &numeros[i]);

    // Verifica se o número é par
    while (numeros[i] % 2 != 0) {
      printf("Número inválido. Digite um número par: ");
      scanf("%d", &numeros[i]);
    }
  }

  // Mostra os números na ordem inversa
  for (i = 5; i >= 0; i--) {
    printf("%d ", numeros[i]);
  }

  printf("\n");

  return 0;
}
