28)
#include <stdio.h>

int main() {
  int num, i;

  // Lê o número do usuário
  printf("Digite um número: ");
  scanf("%d", &num);

  // Verifica se o número é primo
  if (num <= 1) {
    printf("%d não é primo.\n", num);
    return 0;
  }
  for (i = 2; i < num; i++) {
    if (num % i == 0) {
      printf("%d não é primo.\n", num);
      return 0;
    }
  }

  // Se o número não for divisível por nenhum outro número, ele é primo
  printf("%d é primo.\n", num);

  return 0;
}
